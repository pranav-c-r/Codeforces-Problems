n=int(input())
for i in range(n):
    lst=list(map(int,input().split()))
    j=lst[0]
    if lst.count(j)==4:
        print("YES")
    else:
        print("NO")