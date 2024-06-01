#include <stdio.h>
int main ()
{
    // create a programs that determine whether a given year is leap year or not

    int leapyear;
    printf (" Enter your year : ");
    scanf("%d", &leapyear);

    if( leapyear %4 == 0){
        printf("It is a leap year ");
    }
    else{
        printf("It is not a leap year");
    }

    
 return 0;
}