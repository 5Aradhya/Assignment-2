#include <stdio.h>
int main(){
    // Create a program that takes a number (1-7) as input and prints the corresponding days of the week
    int week;
    printf("Enter your days : ");
    scanf("%d",&week);
    if(week == 1){
        printf("Day is Monday");
    }
    else if(week == 2){
        printf("Day is Tuesday");
    }
    else if(week == 3){
        printf("Day is Wednesday");
    }
    else if(week == 4){
        printf("Day is Thursday");
    }
    else if(week == 5){
        printf("Day is Friday");
    }
    else if(week == 6){
        printf("Day is Saturday");
    }
    else{
        printf("Day is Sunday");
    }
    return 0;
}