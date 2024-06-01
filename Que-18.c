#include <stdio.h>
int main(){
    // Develop a program that takes a month(as an integer from 1-12)and a year as input, then prints the number of days in that month,condsidering leap years.
    int month,days;
    printf("Enter your Month (1-12) : ");
    scanf("%d",&month);
    if( month == 11 || month == 4 || month == 6 || month == 9){
        printf("This Month has 30 days");
    }
    else if(month == 2){
        printf("This month has 28 days");
    }
    else{
        printf("This month has 31 days");
    }

}