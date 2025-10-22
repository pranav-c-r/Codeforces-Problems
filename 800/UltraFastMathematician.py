a=input()
b=input()
lista=list(a)
listb=list(b)
x=''

for i in range(len(a)):
    if lista[i]==listb[i]:
        x+='0'
    else:
        x+='1'
print(x)