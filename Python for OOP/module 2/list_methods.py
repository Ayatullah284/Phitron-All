numbers = [22, 44, 66, 64, 22]
roll = [1, 2, 3, 4]

print(numbers)

numbers.append(100)
# numbers.clear()
cop = numbers.copy()
cnt = numbers.count(22)
numbers.extend(roll)
indx = numbers.index(66)
numbers.insert(0,500)
numbers.pop()
numbers.remove(1)
numbers.sort()

print(cop)
print(cnt)
print(indx)
print(numbers)