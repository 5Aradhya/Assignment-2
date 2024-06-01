#include <stdio.h>
int main(){
    // Write a program that takes the three numbers as input and finds the middle (second largest) number
    int num1,num2,num3;
    printf("Enter your first number : ");
    scanf("%d",&num1);
    printf("Enter your second number : ");
    scanf("%d",&num2);
    printf("Enter your third number : ");
    scanf("%d",&num3);
    // 5,6,7
    // 6,7,8
    // 7,8,9
    if(num1 > num2 && num1 > num3){
        if(num2 > num3){
            printf("Second largest number is :%d",num2);
        }
        else{
            printf("Second largest number is : %d",num3);
        }
    }
    else if(num2>num1 && num2 > num3){
        if(num1 > num3){
            printf("Second largest number is : %d",num1);
        }
        else{
            printf("Second largest number is : %d",num3);
        }
    }else if (num1>num2){
        printf("Second largest number is : %d",num1);
    }
    else{
        printf("Second largest number is : %d",num2);
    }
}