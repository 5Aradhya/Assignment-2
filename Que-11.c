#include <stdio.h>
int main(){
    // WAP that takes a person ages as input and classifies them into different ages group (age, teenagers , adult, senoir)
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    if(age>0 && age < 12){
        printf("You are 'Child'");
    }
    else if(age > 12 && age < 18){
        printf("You are 'teenager'");
    }
    else if(age > 18 && age < 60){
        printf("You are 'Senior' ");
    }
    else {
        printf("You are 'Adult'");
    }
    return 0;
}