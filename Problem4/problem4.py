rev_number = 0
num1 = 999
num2 = 999
max_palin = 0;
num = 0

while num1 > 1:
        num2 = 999
        while num2 > 0:
                number = num1*num2
                num = number

                while number != 0:
                        rem = number%10
                        rev_number = rev_number*10 + rem
                        number = number//10


                if num == rev_number:
                        if num > max_palin:
                                max_palin = num

                num2 -= 1
                rev_number = 0
        num1 -= 1

print("Largest Palindrome Product = ", max_palin)
