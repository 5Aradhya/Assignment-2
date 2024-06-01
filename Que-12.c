#include <stdio.h>
int main(){
    // Develop a program  that takes a student score (0-100) as input and prints the corresponding 
    int studentScore;
    printf(" Enter your score (0-100) : ");
    scanf("%d",studentScore);
    if(studentScore > 90 && studentScore < 100){
        printf("Your grade is 'A' ");
    }
    else if(studentScore > 80 && studentScore < 90){
        printf(" Your grade is 'B' ");
    }
    else if(studentScore > 70 && studentScore < 80){
          printf("your grade is 'C'  ");
    }
    else if(studentScore > 60 && studentScore < 70){
        printf("Your grade is 'D' ");
    }
    else if(studentScore > 50 && studentScore < 60){
        printf("Your grade is 'E' ");
    }
    else if(studentScore > 40 && studentScore < 40){
        printf("Your grade is 'F' ");
    }
}