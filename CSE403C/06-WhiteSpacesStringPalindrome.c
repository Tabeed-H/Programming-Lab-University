// Program to check if a string is palindrome or not (checking spaces)
#include <stdio.h>
#define MAX 100

int getSize(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;

    return i;
}

int checkPalindrome(char str[], int size){
    int lowerBound = 0;
    int upperBound = size -1;

    while(lowerBound <= upperBound){
        if(str[lowerBound] == ' '){
            lowerBound++;
            continue;
        }
        if(str[upperBound] == ' '){
            upperBound--;
            continue;
        }
        if(str[lowerBound] != str[upperBound]) return 0;
        lowerBound++;
        upperBound--;
    }

    return 1;
}

int main(){
    char input[MAX];
    int size;

    printf("Enter Sentence: ");
    scanf("%[^\n]s", input);

    size = getSize(input);

    if(checkPalindrome(input, size)){
        printf("The Sentance is a Palindrome!");
    }else{
        printf("The Sentance is NOT a Palindrome!");
    }
}