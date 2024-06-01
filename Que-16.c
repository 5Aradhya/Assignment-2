#include <stdio.h>
int main(){
    // Write a program that takes a start year and an end year from the user input and printf all the leap years in that range 
    int i,leapyears,startYear,endYear;
    printf("Enter your Star year : ");
    scanf("%d",&startYear);
    printf("Enter your End year : ");
    scanf("%d", &endYear);
    if (startYear %endYear != 0){
        printf("Your leap year is : ");
        for(i = startYear; i <= endYear; i+=4){
            printf("% d",i);
        }
    }
    else{
        
    }
    
}