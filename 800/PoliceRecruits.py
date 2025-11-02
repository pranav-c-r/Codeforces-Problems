n=int(input())
lst=list(map(int,input().split()))
count=0
y=lst.count(-1)
x=0
for i in lst:
    if i>0:
        count+=i
    else:
        while count!=0:
            x+=1
            count-=1
print(y-x)