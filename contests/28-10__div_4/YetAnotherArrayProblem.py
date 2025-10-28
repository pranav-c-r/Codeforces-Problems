import math
t=int(input())
for j in range(t):
    m=1
    n=int(input())
    a=list(map(int,input().split()))
    for x in range(2,100):
        for i in a:
            if math.gcd(x,i)==1:
                print(x)
                m=2
                break
        if m==2:
            break
    if m==1:
        print(-1)