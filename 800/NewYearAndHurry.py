n,k=map(int,input().split())
x=240-k
m=0
count=0
for i in range(1,n+1):
    if m+5*i<=x:
        m+=5*i
        count+=1
print(count)
    
