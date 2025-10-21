# n,k=map(int,input().split())
# lst=[x for x in range(1,n+1) if x%2!=0]+[y for y in range(1,n+1) if y%2==0]
# print(lst[k-1])

# the above approach gives memory limit exceeded error in test 8
# similary the approach with two for loops one after other to append into list and concatenating lists
# that method also gives same memory limit exceeded error.

import math
n,k=map(int,input().split())
oddnum=(n+1)//2
evennum=n//2

if k<=oddnum:
    print(2*k-1)
else:
    print(2*(k-oddnum))

# take example of 7 7
# the numbers are 1,3,5,7,2,4,6
# number of odd numbers in the list = (n+1)//2
# number of even numbers = n//2
# if u want to test, take any other example too
# if k is less than oddnum then the kth element is simply the kth odd number
# else it is the (k-oddnum)th even number