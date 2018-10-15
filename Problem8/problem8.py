#Project Euler Problem 8
f = open('number.txt', 'r')

data = f.read()

product = 1
max_product = 1
numberList = []
for d in data:
    if(d != '\n'):
        i = int(d)
        numberList.append(i)

lenList = len(numberList)
for index, num in enumerate(numberList):
    if index+13 < lenList:
        product = 1
        for x in range(0, 13):
            product = product *  numberList[index+x]
            if product > max_product:
                max_product = product

print("Product = ", max_product)
