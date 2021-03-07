def fibsum(age):
    if (age <=100 and age>=2):
        f1 = 0
        f2 = 1
        Sum = 0
        temp = 0
        b = 0
        while (f2<=age):
           Sum = f2 + Sum
           temp = f1 + f2
           f1 = f2
           f2 = temp
        print ("The Summary of all fibonacci  numbers that are smaller than your age is", Sum)
    else:
        print ("please enter a valid age")
        return 1

def Prime (age):
    for b in range(2, age):
        if (age%b == 0):
            print ("Your age isn't a prime number", age)
        else:
            print ("Your age is a prime number", age)
            break
        return 0

def ConvertToBinary(age):
    binaryArray = [0,0,0,0,0,0,0,0]
    b = len(binaryArray)-1
    while (age > 0):
        binaryArray [b] = age%2
        b=b-1
        age = int (age/2)
    print (binaryArray)
def main():
    while (1):
        X = int(input("Please Type your age: "))
        if (fibsum(X) != 1):
            Prime (X)
            ConvertToBinary(X)
            break
main()
