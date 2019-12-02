def fact(n):
    if n==0:
        return 1
    else :
        return n*fact(n-1)
n=int(input("the number is : "))
if n<0:
    print("the factorial of negative number is not defined")
else : 
    print("the factorial of the number " +str(n)+ " is " , fact(n))
