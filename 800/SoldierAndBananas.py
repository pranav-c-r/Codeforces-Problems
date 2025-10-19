cost=0
k,n,w=map(int,input().split())
for i in range(1,w+1):
    cost += i*k
print(max(cost-n,0))