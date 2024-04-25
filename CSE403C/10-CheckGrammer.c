// Program that checks if a string passes a grammer or not
/**
 * @brief
 * Given Grammer
 * ( or {   ->  4
 * ) or }   ->  5
 * Digit    ->  6
 * +        ->  2
 * *        ->  3
 * 
 */

#include <stdio.h>
#include <ctype.h>
#define MAX 100

int getSize(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}

void resolveGrammer(char str[], char outputStr[], int size){
    int i = 0;
    for (i = 0; i < size; i++){
        if (str[i] == '(' || str[i] == '{'){
            outputStr[i] = '4';
        }else if (str[i] == ')' || str[i] == '}'){
            outputStr[i] = '5';
        }else if (isdigit(str[i])){
            outputStr[i] = '6';
        }else if (str[i] == '+'){
            outputStr[i] = '2';
        }else if (str[i] == '*'){
            outputStr[i] = '3';
        }else{
            outputStr[i] = str[i];
        }
    }
    outputStr[i] = '\0';
    printf("Replaced String is: %s", outputStr);
}

int reduceString(char str[], int size){
    if(getSize(str) == 1 && str[0] == '6') return 1;
    if(getSize(str) == 1 && str[0] != '6') return 0;

    int i = 0;
    int match = 0;
    for(i = 0; i < size; i++){
        match = 0;
        if(str[i] == '4' && str[i + 1] == '6' && str[i + 2] == '5'){
            str[i] = '6';
            for(int j = i + 1; j < size; j++) str[j] = str[j + 2];
            match = 1;
            break;
        }
        if(str[i] == '6' && str[i + 1] == '2' && str[i + 2] == '6'){
            str[i] = '6';
            for(int j = i + 1; j < size; j++) str[j] = str[j + 2];
            match = 1;
            break;
        }
        if(str[i] == '6' && str[i + 1] == '3' && str[i + 2] == '6'){
            str[i] = '6';
            for(int j = i + 1; j < size; j++) str[j] = str[j + 2];
            match = 1;
            break;
        }
    }

    if(i == size && !match) return 0;

    size = size - 2;
    str[size] = '\0';
    printf("\nResolved String at Stage: %s", str);
    reduceString(str, size);
}


int main(){
    char input[MAX], output[MAX];
    int size;

    printf("Enter String: ");
    scanf("%[^\n]%*c", input);
    size = getSize(input);

    resolveGrammer(input, output, size);
    reduceString(output, size) ? printf("\nGrammer Accepted!") : printf("\nGrammer NOT Accepted!");

}