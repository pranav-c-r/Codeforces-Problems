import math
n,k,l,c,d,p,nl,np=map(int,input().split())
print(int(min(math.floor(k*l/nl),c*d,p/np)/n))