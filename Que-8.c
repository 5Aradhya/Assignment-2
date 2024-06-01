#include <stdio.h>
int main (){
    // Write a program to calculate simple interest 
    int P,T,R,SI;
    printf(" enter your principle : ");
    scanf("%d",&P);
    printf(" enetr your rate % value in per annum : ");
    scanf("%d",&R );
    printf(" enter your time : ");
    scanf("%d",&T);
    SI= (P*T*R)/100;
    printf(" your SI value is %f",SI);

}