t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    has_odd=any(x%2==1 for x in a)
    has_even=any(x%2==0 for x in a)
    if has_odd and has_even:
        a.sort()
    print(*a)
