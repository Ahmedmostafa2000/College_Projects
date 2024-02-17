import matplotlib.pyplot as plt
def create_dictionary2(txt):
    dictionary = {}
    i=0
    for x in set(txt):
        dictionary[x] = txt.count(x)/len(txt)
    return dictionary
test = "quatre jutges dun jutjat mengen fetge dun penjat"
test_dict = create_dictionary2(test)
c = Counter("quatre jutges dun jutjat mengen fetge dun penjat")
plt.bar(test_dict.keys(), test_dict.values(), width=0.5, color='g')
plt.show()