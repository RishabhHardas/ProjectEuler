import math

num = 600851475143

if num % 2 == 0:
	num = num/2
	last_factor = 2
	while num % 2 == 0:
		num = num/2
else:
	last_factor = 1

factor = 3
max_factor = math.sqrt(num)
while num > 1 or factor <= max_factor:
	if num % factor == 0:
		last_factor = factor
		num = num / factor
		while num % factor == 0:
			num = num / factor

		max_factor = math.sqrt(num)

	factor = factor + 2
if num == 1:
	print("Largest Prime Factor = ", last_factor)
else:
	print("Largest Prime Factor = ", num)
