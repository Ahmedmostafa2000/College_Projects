import pandas as pd
from matplotlib import pyplot as plt
df = pd.read_csv('housing.csv')
df['income_category'] = pd.cut(df['median_income'],bins = [1,2,3,4,5,6])
df['income_category'].hist()
plt.show()