n=int(input())
count=0
for i in range(n):
    a,b,c=map(int,input().split())
    lst=[a,b,c]
    if lst.count(1)>=2:
        count+=1
print(count)