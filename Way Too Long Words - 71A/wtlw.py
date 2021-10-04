for i in range(int(input())):
    nw = ""
    a = input()
    if len(a) > 10:
        nw = nw + a[0] + str(len(a)-2) + a[-1]
    else:
        nw = a
    print(nw)
