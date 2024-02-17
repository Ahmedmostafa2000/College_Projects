import requests
import json

def get_city_opendata(city, country):
    tmp = 'https://public.opendatasoft.com/api/records/1.0/search/?dataset=worldcitiespop&q=%s&sort=population&facet=country&refine.country=%s'
    cmd = tmp % (city, country)
    res = requests.get(cmd)
    dct = json.loads(res.content)
    #out = dct['records'][0]['fields']
    if len(dct['records'])==0:
        return "NaN"
    return dct['records'][0]['fields']#['population']#list(out.values())[-1]

x = get_city_opendata('Hebei', 'CN')
print(x)