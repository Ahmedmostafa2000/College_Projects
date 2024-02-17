#from html2json import collect
import requests
import json
#url="https://api.worldweatheronline.com/premium/v1/weather.ashx "
key = "f7b697789205412a844165627202302"

url = "http://api.worldweatheronline.com/premium/v1/weather.ashx?key=f7b697789205412a844165627202302&q=48.85,2.35&num_of_days=2&tp=3&format=xml"
response = requests.get(url)

print(response.content)
