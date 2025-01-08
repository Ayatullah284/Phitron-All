# set: unique items collection

numbers = [10, 19, 28, 37, 46, 55, 91, 10, 28]
print(numbers, type(numbers))
print(set(numbers), type(set(numbers)))
print(tuple(numbers), type(tuple(numbers)))

print('.......set.......')
numbers_set = set(numbers)
numbers_set.add(500)
numbers_set.remove(10)
print(numbers_set)
for item in numbers_set:
    print(item)

if 65 in numbers_set:
    print('No, This number is false')
elif 500 in numbers_set:
    print('Yes, This number is true')


"""

https://www.w3schools.com/python/python_ref_set.asp
https://docs.python.org/3.10/library/stdtypes.html#set-types-set-frozenset

"""
# set methods:
x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = x.intersection(y)
# print(z)

x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
x.intersection_update(y) 
# print(x)


x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "facebook"}
z = x.isdisjoint(y) 
# print(z)

x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = x.isdisjoint(y) 
# print(z)

fruits = {"apple", "banana", "cherry"}
fruits.pop() 
print(fruits)

fruits = {"apple", "banana", "cherry"}
fruits.remove("banana") 
print(fruits)

x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
z = x.union(y) 
print(z)

x = {"apple", "banana", "cherry"}
y = {"google", "microsoft", "apple"}
x.update(y)
print(x)

a = {1, 3, 5, 7}
b = {1, 3, 5, 6, 8, 9}
print(a&b)
print(a|b)



print('..........list..........')
numbers.remove(19)
print(numbers)

# numbers_set[2]= 200             => eyta kora jabe na



