def addition(num1, num2):
        return num1 + num2

def subtraction(num1, num2):
        return num1 - num2

def multiplication(num1, num2):
        return num1 * num2

def division(num1, num2):
        return num1 / num2

def rad(num):
        return num**(1/2)

def square(num):
        return num**2

def quad_form(a, b, c):
        # error: should be division instead of multiplication
        x = multiplication((-b + rad(square(b) - 4*a*c)), multiplication(2, a))

        # error2: should be multiplication instead of addition
        y = division((-b - rad(square(b) - 4*a*c)), addition(2, a))
        return [x, y]


def main():
        a = 1
        b = 5
        c = 6
        
        # correct code would print out [-2, -3]
        print(quad_form(a, b, c))

main()