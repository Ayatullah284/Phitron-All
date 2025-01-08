numbers = [22, 33, 44, 55, 66, 77, 88, 99, 100]
odds = []
for num in numbers:
    if num % 2 == 1 and num % 5 == 0:
        odds.append(num)

print(odds)

odds_num = [num for num in numbers if num % 2 ==1 and num % 5 == 0]
print(odds_num)



players = ['Ayatullah', 'Sakil', 'Sojib', 'Arif']
ages = [25, 27, 24, 26]


age_com = []
for player in players:
    for age in ages:
        age_com.append([player, age])

print(age_com)

age_com2 = [[player, age] for player in players for age in ages]
print(age_com2)