not_solved = True
z = 20

"""2520 is the smallest number that can be divided by each of the
numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by
all of the numbers from 1 to 20?"""

while not_solved:
##for x in range(1, 10, 1):
    if z%1 == 0 and z%2 == 0 and z%3 == 0 and z%4 == 0 and z%5 == 0 and z%6 == 0 and z%7 == 0 and z%8 == 0 and z%9 == 0 and z%10 == 0 and z%11 == 0 and z%12 == 0 and z%13 == 0 and z%14 == 0 and z%15 == 0 and z%16 == 0 and z%17 == 0 and z%18 == 0 and z%19 == 0 and z%20 == 0:
        print("The solution is ", z)
        not_solved = False
    else:
        z +=20
        print(z)
        continue

        ##if z == 11:
          ##  not_solved == False
