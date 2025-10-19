a,b=map(int,input().split())
count=0
while True:
    if a>b:
        print(count)
        break
    else:
        a*=3
        b*=2
        count+=1