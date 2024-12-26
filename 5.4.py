def gcd(a,b):
    while b!=0:
     m=b
     b=a%b
     a=m
    return a 

a=int(input("enter the first number : \n"))
b=int(input("enter the second number : \n"))
print (f"tne gcd of {a} and {b} is : {gcd(a,b )}")