t=int(input())
for i in range(t):
    r,x,d,n=map(int,input().split())
    s=input()
    lst=[]
    for i in s:
        lst.append(i)
    score=r
    count=0
    for i in range(n):
        if lst[i]==1:
            count+=1
            score-=d
        else:
            if score<x:
                count+=1
                score-=d
    print(count)
        