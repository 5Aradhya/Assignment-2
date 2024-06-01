#include <stdio.h>
int main()
{
    // Write a program that takes three numbers as input and outputs the largest among them use conditional statement to compare them
    int a, b, c;
    printf(" Enter your first number :");
    scanf("%d", &a);
    printf(" Enter your second number :");
    scanf("%d", &b);
    printf(" Enter your third number :");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf(" A is greater : ");
        }
        else
        {
            printf(" C is greater : ");
        }
        if (b > c)
        {
            printf("B is greater : ");
        }
        else
        {
            printf(" Cis greater : ");
        }
    }
    return 0;
}