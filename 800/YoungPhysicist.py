import math
n=int(input())
xsum=0
ysum=0
zsum=0
for i in range(n):
    a,b,c=map(int,input().split())
    xsum+=a
    ysum+=b
    zsum+=c
if xsum==ysum==zsum==0:
    print("YES")
else:
    print("NO")