number = 2520

while True:
        for div in range(1, 21):
                if number%div == 0:
                        continue
                else:
                        break
        if div == 20:
                print(number)
                break
        else:
                number+=1
