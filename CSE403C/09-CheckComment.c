// Program that checks if the string is a comment or not
// comments can start with //
// or between /*  */

#include <stdio.h>
#define MAX 100

int getSize(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}

int checkString(char str[], int size){
    int i = 0;
    if(str[i] == '/' && str[i + 1] == '/'){
        return 1;
    }else if(str[i] == '/' && str[i + 1] == '*'){
        if(str[size - 1] == '/' && str[size - 2] == '*') return 1;
        return 0;
    }

    return 0;
}

int main(){
    char input[MAX];
    int size;

    printf("Enter String: ");
    scanf("%[^\n]%*c", input);

    size = getSize(input);

    checkString(input, size) ? printf("IS Comment!") : printf("NOT Comment!");

    return 0;
}