#!/usr/bin/env python
# coding: utf-8

# In[1]:


import pandas as pd
from sklearn.linear_model import LogisticRegression


# In[2]:


data = pd.read_csv("data.csv")
data = data.drop("Unnamed: 32",axis = 1)


# In[3]:


reg = LogisticRegression()


# In[4]:


data= data.drop("id",axis = 1)
y = data["diagnosis"]
y  = pd.get_dummies(y)


# In[5]:


from sklearn.preprocessing import MinMaxScaler
scaler = MinMaxScaler()


# In[6]:


x = data.drop(["smoothness_se",'fractal_dimension_mean','texture_se','symmetry_se'
        ,'fractal_dimension_se','diagnosis'],axis = 1)


# In[7]:


x = pd.DataFrame(scaler.fit_transform(x))


# In[8]:


y = y.drop('B',axis = 1)


# In[9]:


data['diagnosis'] = y


# In[10]:


data.corr()['diagnosis'].sort_values()


# In[11]:


from sklearn.model_selection import train_test_split


# In[12]:


x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2, random_state=42)


# In[13]:


reg.fit(x_train,y_train)


# In[14]:


y_pred = reg.predict(x_test)


# In[15]:


from sklearn.metrics import r2_score
r2_score(y_test, y_pred)


# In[ ]:




