n=int(input())
lst = list(map(int,input().split()))
lst2=[x for x in range(n)]
for i in range(n):
    lst2[lst[i]-1] = i+1
for i in range(n):
    print(lst2[i],end=" ")