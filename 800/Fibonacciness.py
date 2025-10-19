n=int(input())
for i in range(n):
    a,b,d,e = map(int, input().split())
    f=[]
    for c in range(-100,100):
        g=0
        if c==a+b:
            g+=1
        if e==c+d:
            g+=1
        if d==b+c:
            g+=1
        f.append(g)
    print(max(f))