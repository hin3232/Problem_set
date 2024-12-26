def digi(a):
    i=0
    while a!=0 :
      a=a//10
      i+=1
    return i
a=int(input("enter a number : \n"))
print(f'The number of digits in {a} is:  {digi(a)}\n')