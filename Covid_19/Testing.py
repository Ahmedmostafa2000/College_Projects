import json
filename = "population.json"
if filename:
    with open(filename, 'r') as f:
        datastore = json.load(f)
print(datastore)