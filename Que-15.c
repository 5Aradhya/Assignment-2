#include <stdio.h>
int main (){
    //  Develop a program that converts a temperature from fahrenheit to celcius or vice versa based on user input the user should specify the type of coversion
    int Temp1 , Temp2 ;
    int choose ;
    printf(" Enter your choose : \n 1. Fahrenheit to celcius - \n 2. celcius to fahrenheit - \n");
    scanf(" %d",&choose);
    switch (choose)
    {
    case 1:
        printf(" Enter your degree to you convert :");
        scanf("%d",&Temp1);
        printf(" your 'fahrenheit to celcius is : %f degree ", Temp1 *(-17.22222) );
        break;
    case 2:
    printf(" Enter your degree to you convert : ");
    scanf("%d",&Temp2);
    printf(" your 'fahrenheit to celcius is : %f' degree ",Temp2 * (33.8) );
    break;    

    }
}