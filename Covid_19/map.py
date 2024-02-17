import numpy as np
import pandas as pd
import folium
import matplotlib.pyplot as plt

df = pd.read_csv('CoronaCities.csv')

city = list(df.iloc[:,1])

BBox = ((df.lon.min(),   df.lon.max(),
         df.lat.min(), df.lat.max()))
print(BBox)


folium_map = folium.Map(location=[35.8617,104.1954],zoom_start=5,tiles='CartoDB dark_matter')

for index, row in final_china_state.iterrows():
    folium.CircleMarker(location=(row['lat'],row['lng']),radius=row['Confirmed']/80,color='#E37222',
                        popup = ('<strong><u>Country</u></strong>: ' + str(row['Province/State']).capitalize())
                        ,fill=True).add_to(folium_map)


folium_map


#
# ruh_m = plt.imread('Untitled.png')
# fig, ax = plt.subplots(figsize = (8,7))
# ax.scatter(df.lon, df.lat, zorder=1, alpha= 0.2, c='b', s=10)
# ax.set_title('Plotting Spatial Data on Riyadh Map')
# ax.set_xlim(BBox[0],BBox[1])
# ax.set_ylim(BBox[2],BBox[3])

# ax.imshow(ruh_m, zorder=0, extent = BBox, aspect= 'equal')