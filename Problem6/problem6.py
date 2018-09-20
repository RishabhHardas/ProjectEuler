sq1 = 0
sq2 = 0

for i in range(1,101):
        sq1 = sq1 + i**2
        sq2 = sq2 + i

sq2 = sq2**2

print(sq2-sq1)
