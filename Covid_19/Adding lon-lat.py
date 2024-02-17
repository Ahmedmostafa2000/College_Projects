from geopy.geocoders import Nominatim
from pandas import read_csv,DataFrame
from sklearn.impute import SimpleImputer
from time import sleep
data = read_csv("nCovAsiaDated.csv")
imputer = SimpleImputer(strategy="constant")
imputer.fit(data[['Province/State']])
data[['Province/State']] = imputer.transform(data[['Province/State']])

data["lat"] = "NaN"
data["lon"] = "NaN"
city = list(data.iloc[:,1])
lat = [0]*len(city)
lon = [0]*len(city)

for i in range(len(city)):
    geolocator = Nominatim(user_agent= "CoronaVirus"+city[i])
    if city[i]!='missing_value':
        print(city[i],end = '\t\t')
        location = geolocator.geocode(str(city[i]))
        lat[i] = location.latitude
        lon[i] = location.longitude
        print(int((i/len(city))*100),'\t','\t','\t',i)
    else:
        city[i] = None
    sleep(1)
data["lat"] = lat
data["lon"] = lon
data.to_csv("CoronaCities.csv")