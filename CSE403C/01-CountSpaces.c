#include <stdio.h>
#include <string.h>
#define MAX 100


int main(){
    char inputStr[MAX];
    int count = 0;
    int i = 0;

    printf("Enter String: ");
    scanf("%[^\n]s", inputStr);

    while(inputStr[i] != '\0'){
        if(inputStr[i] == ' ') count++;
        i++;
    }

    printf("Number of Spaces: %d", count);
    return 0;
}