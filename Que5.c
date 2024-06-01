#include <stdio.h>
int main (){
    // create a program that a single character as input and determine it is a vowel or consonant
    char userInput;
    printf(" enter your alphabet : ");
    scanf(" %c",&userInput);

    if (userInput == 'a' || userInput == 'e'|| userInput == 'i'|| userInput == 'o' || userInput == 'u' && userInput == 'A' || userInput == 'E'|| userInput == 'I'|| userInput == 'O' || userInput == 'U' )
{
printf(" it is a Vowel" );
}
else{
printf("It is Consonant");
}

}