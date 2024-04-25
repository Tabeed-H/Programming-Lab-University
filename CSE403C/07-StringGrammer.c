// Program that replaces the contents of string based on a grammer
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
void replaceString(char str[], int size){
    char result[MAX];
    int i;
    for (i = 0; i < size; i++){
        if (str[i] == '(' || str[i] == '{'){
            result[i] = '4';
        }else if (str[i] == ')' || str[i] == '}'){
            result[i] = '5';
        }else if (isdigit(str[i])){
            result[i] = '6';
        }else if (str[i] == '+'){
            result[i] = '2';
        }else if (str[i] == '*'){
            result[i] = '3';
        }else{
            result[i] = str[i];
        }
    }
    result[i] = '\0';
    printf("Replaced String is: %s", result);
}
int main(){
    char input[MAX];
    int size;

    printf("Enter String: ");
    scanf("%[^\n]s", input);

    size = getSize(input);
    replaceString(input, size);
    return 0;
}