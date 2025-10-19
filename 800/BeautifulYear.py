year=int(input())
i = year+1
while True:
    s=str(i)
    y=list(s)
    if len(y) == len(set(y)):
        print(i)
        break
    else:
        i+=1