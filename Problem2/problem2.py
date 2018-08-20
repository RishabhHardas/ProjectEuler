a, b = 1, 2
next_no, s = 0, 0

while a < 4000000:
	if a % 2 == 0:
		s = s + a
	next_no = a+b
	a = b
	b = next_no


print("Sum = ", s) 
