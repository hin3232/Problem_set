t=[]
l=int(input (" The length of the array?"))
for m in range (l):
    t.append(int(input()))
print ("\n°°° Inverse Array °°°")
for m in range (l-1,-1,-1):
    print(t[m])
    print ('\n')