// Programs that counts the number of tokens in a string and the length of each token
#include <stdio.h>
#include <string.h>
#define MAX 100

int getSize(char str[]){
    int count = 0;
    while(str[count] != '\0') count++;

    return count;
}

void countTokens(char str[], int size){
    int tokenCount = 0; // holds the total token count
    int tokenLenght = 0;    // holds token length
    int hasWord = 0; 
    for(int i = 0; i < size; i++){
        // checks if the string contains a word or not
        if(str[i] == ' ' && !hasWord){
            continue;
        }else{
            hasWord = 1; // string contains a word
            tokenLenght++;  // is incremented when a character is present

            // EDGE CASE: Checks for the end word that doesnot end with a space
            if(str[i] != ' ' && str[i + 1] == '\0'){
                tokenCount++;
                printf("\nToken Number: %d, Token Length: %d", tokenCount, tokenLenght);
                tokenLenght = 0;    // resets token lenght for new token
            }else if(str[i] == ' '){
                tokenCount++;
                printf("\nToken Number: %d, Token Length: %d", tokenCount, tokenLenght-1);
                tokenLenght = 0;    // resets token lenght for new token
            }
        }
    }
}

int main(){
    char str[MAX];
    int size;

    printf("Enter String: ");
    scanf("%[^\n]s", str);

    size = getSize(str);
    countTokens(str, size);

    return 0;

}