#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int addition(int num1, int num2) 
{
        return num1 + num2;
}

int subtraction(int num1, int num2) 
{
        return num1 - num2;
}

int multiplication(int num1, int num2) 
{
        return num1 * num2;
}

int division(int num1, int num2) 
{
        return num1 / num2;
}

int rad(int num) 
{
        return sqrt(num);
}

int square(int num)
{
        return num * num;
}

void quadForm(int a, int b, int c, float **answers) 
{
        // error: should be division instead of multiplication
        (*answers)[0] = multiplication((-b + rad(square(b) - 4*a*c)), multiplication(2, a));
        // error2: should be multiplication instead of addition
        (*answers)[1] = division((-b - rad(square(b) - 4*a*c)), addition(2, a));
}

int main(int argc, char argv[])
{
        int a = 1;
        int b = 5;
        int c = 6;

        float *answers;
        answers = malloc(sizeof(float) * 2);
        quadForm(a, b, c, &answers);
        
        printf("The quadratic formula gets: %f, %f\n", answers[0], answers[1]);
}