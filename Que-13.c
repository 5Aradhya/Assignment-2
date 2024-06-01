#include <stdio.h>
int main()
{
    // write a program that reads two integers from the user and determins the first integer is divisible by the second integer
    int int1, int2;
    printf("Enter your first number : ");
    scanf("%d", &int1);
    printf("Enter your second number : ");
    scanf("%d", &int2);
    if (int1 % int2 == 0)
    {
        printf("Number is divisible");
    }
    else
    {
        printf("Number is Indivisible");
    }
}