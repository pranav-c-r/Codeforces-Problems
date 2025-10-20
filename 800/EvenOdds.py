n,k=map(int,input().split())
lst=[x for x in range(1,n+1) if x%2!=0]+[y for y in range(1,n+1) if y%2==0]
print(lst[k-1])
