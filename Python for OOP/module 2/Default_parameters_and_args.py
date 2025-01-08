# Default
def sum(num1, num2, num3=0, num4=0):
    print(num1+num2+num3)

sum(10, 20, 30)

# Args
def total(*numbers):
    for num in numbers:
        print(num)

total(1, 2, 3, 4, 5, 6, 7, 8)