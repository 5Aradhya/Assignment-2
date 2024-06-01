#include <stdio.h>
int main (){
    // Develop a program that reads a number from the user and prints whether it is positive , negative , or zero 
    int userNo ;
    printf(" Enter your number : ");
    scanf(" %d",&userNo);
    if (userNo == 0){
        printf("It is equal to zero");
    }
    else if(userNo > 0){
        printf("It is Positive number ");
    }
    else{
        printf("It is negative");
    }
}