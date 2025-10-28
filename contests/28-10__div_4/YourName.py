n=int(input())
for i in range(n):
    l=int(input())
    s,t=list(input().split())
    lst1=[]
    lst2=[]
    m=1
    for i in s:
        lst1.append(i)
    for i in t:
        lst2.append(i)
    for j in lst1:
        if lst1.count(j)==lst2.count(j):
            continue
        else:
            print("NO")
            m=2
            break
    if m==1:
        print("YES")