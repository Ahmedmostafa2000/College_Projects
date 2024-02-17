from pandas import read_csv
from String_to_date import str2date
data = read_csv("1.csv")

data["nDate"] = "NaN"
data = data.drop([0,1],axis = 0)
Dates = list(data.iloc[:,2])
for i in range(len(Dates)):
    print(i,end='\t\t')
    Dates[i] = str2date(str(Dates[i]))
# for i in range(224,len(Dates)):
#     Dates[i] = str2date2(str(Dates[i]))
data["nDate"] = Dates

print(data[["nDate"]].max())
data.to_csv("nCovAllDated.csv")