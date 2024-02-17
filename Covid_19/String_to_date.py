def str2date(x):
    x = x.replace('-', '/')
    x = x.split()

    x = x[0].split("/")
    print(x)
    return int((int(x[0])-1)*31+int(x[1]))