n=int(input())
lst=list(map(int,input().split()))
curr=[lst[0]]
amazing=0
for i in lst:
    if i>max(curr) or i<min(curr):
        amazing+=1
    curr.append(i)
print(amazing)