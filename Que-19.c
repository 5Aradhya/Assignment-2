#include <stdio.h>
int main()
{
    //  Develop a program that takes four numbers as input and prints the largest among them
    int a, b, c, d;
    printf("Enter your first number : ");
    scanf("%d", &a);
    printf("Enter your second number : ");
    scanf("%d", &b);
    printf("Enter your third number : ");
    scanf("%d", &c);
    printf("Enter your four number : ");
    scanf("%d", &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("A is greatest ");
            }
            else{
                printf("D is greatest");
            }
           
        } else{
                if(c>d){
                    printf("C is greatest ");
                }
                else{
                    printf("D is greatest");
                }
            }     
    }else{
        if(b>c){
            if(b>d){
                printf("B is Greatest");
            }
            else{
                printf("D is greatest");
            }
        }else{
            if(c>d){
                printf("C is greatest");
            }
            else{
                printf("D is greatest");
            }
        }
    }
}