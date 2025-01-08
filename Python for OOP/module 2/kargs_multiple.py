# kargs, multiple
def full_nam(first, last, **exta):
    for key, val in exta.items():
        print(key, val)
    return f"{first} {last}"
    

nam = full_nam(first='Alu', last='Mia', city='Tangail', book='Quran')
print(nam)


def multiple_return(num1, num2):
    sum = num1+num2
    vag = num1//num2
    gon = num1*num2
    return sum, vag, gon
result = multiple_return(20, 10)
print(result)


def display_person(**kwargs):
    for key,value in kwargs.items():
        print(f"{key}: {value}")


display_person(Name="Amir Khan", Age="45")