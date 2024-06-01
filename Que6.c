#include <stdio.h>
int main (){
    // Write a program to calculate a average of three integers numbers are given by user
     int a,b,c, sum ;
     printf(" enter your first number : ");
     scanf("%d",&a);
     printf(" enter your second number : ");
     scanf("%d",&b);
     printf(" enter your second number : ");
     scanf("%d",&c);
     sum = (a+b+c)/3;
     printf("their average is : %d",sum);
     return 0;
}