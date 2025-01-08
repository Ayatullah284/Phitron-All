numbers = [10, 19, 28, 37, 46, 55, 91, 10, 28]
person = ['Ayatullah', 'Chandosi', 25, 'Teacher']
# key value || dictionary || has table || object:
# overlap with set:
person2 = {'name':'Ayatullah', 'address':'Chandosi', 'age':25, 'profetion':'Teacher'}
print(person2)
print(person2['name'])
print(person2.keys())
print(person2.values())
person2['language']='Python'
person2['name']='Sada Pakhi'
print(person2)

# methods:
car = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x = car.items()
print(x)
for k, v in car.items():
    print(k, v) 
