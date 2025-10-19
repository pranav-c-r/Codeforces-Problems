n=int(input())
for i in range(n):
    n,a,b=map(int,input().split())
    distance = abs(a - b)
    
    # Alice wins if the distance is odd
    if distance % 2 == 1:
        print("NO")
    else:
        print("YES")