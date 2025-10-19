mainlst=[]
for i in range(5):
    lst=list(map(int,input().split()))
    mainlst.append(lst)
for i in range(5):
    if 1 in mainlst[i]:
        row=i
        col=mainlst[i].index(1)
        print(abs(2-row)+abs(2-col))
        break