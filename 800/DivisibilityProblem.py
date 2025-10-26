"""
this code is correct but time limit exceeded on test 3. 
refer to the cpp code.
"""

t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    moves=0
    while True:
        if a%b==0:
            print(moves)
            break
        a+=1
        moves+=1
    