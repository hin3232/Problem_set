def fac(n):
    m=1
    for i in range (1,n+1):
        m=i*m
    return m
n =int(input("enter the number \n "))
print (fac(n))
