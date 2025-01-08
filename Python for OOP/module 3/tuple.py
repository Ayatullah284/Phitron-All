def number():
    return 2, 3

print(number())

books = 'English', 'Bangla', 'Math'
print(books)
print(type(books))
if 'Math' in books:
    print('Ase')
print(books[0])
print(books[::-1])
for book in books:
    print(book)

number = ([1,2,3], [4,5,6])
number[0][1]= 222
print(number)