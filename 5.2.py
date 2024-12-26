def powr(a,b):
    m=1
    for i in range(b ) :
        m=m*a
    return m 
a=int(input("enter the number \n"))
b=int (input ("then power :\n"))
print (f" the result is : {powr(a,b)}")