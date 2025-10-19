n,k=map(int, input().split())
lst = list(map(int, input().split()))
max = lst[k-1]
count = 0
for i in lst:
    if i >= max and i > 0:
        count += 1
print(count)