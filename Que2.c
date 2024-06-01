#include <stdio.h>
int main (){
    // Implement a simple calculator program that takes two numbers and an operator ( +,-,*,/ ) as input and performs the corresponding operations
    int num1 , num2;
    char op;
    printf ( " Enter you operations ( '+','-','*' ,'/') : ");
    scanf ("%c",&op);
printf(" Enter your first number :");
scanf("%d",&num1);
 printf("Enter your second number : ");
 scanf("%d",&num2);
    
    switch (op)
    {
        case '+':
        printf("%d",num1+num2);
        break; 

        case '-' :
        printf("%d",num1-num2);
        break;

        case '*' :
        printf("%d",num1*num2);
        break;

        case '/' : 
        printf("%d",num1/num2);
        break;
     default : 
       break ;   

    }
}