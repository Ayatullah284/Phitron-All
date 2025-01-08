# lamda

# def double(num):
#     return num*2

double = lambda num: num*2
result = double(44)
print(result)


add = lambda x,y: x+y
print(add(10,20))

numbers = [10, 19, 28, 37, 46, 55, 91, 10, 28]
# map_num = map(double, numbers)
map_num = map(lambda x: x*2, numbers)
print(numbers)
print(list(map_num))


actors = [
    {'name': 'sabana', 'age': 24},
    {'name': 'fabana', 'age': 14},
    {'name': 'kabana', 'age': 64},
    {'name': 'mabana', 'age': 54},
    {'name': 'dabana', 'age': 44},
    {'name': 'jabana', 'age': 34},
]

# juniours = filter(lambda x: x['age'] < 40, actors)
# print(list(juniours))
print(list(filter(lambda x: x['age']< 40, actors)))
