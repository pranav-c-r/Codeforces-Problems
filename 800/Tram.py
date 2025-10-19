n=int(input())
count=0
cap=0
for i in range(n):
    a,b=map(int,input().split())
    count-=a
    count+=b
    if cap<count:
        cap=count
 
print(cap) 