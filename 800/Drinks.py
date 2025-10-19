n=int(input())
lst = list(map(int,input().split()))
s=0
for i in lst:
    s+=i
print(s/n)