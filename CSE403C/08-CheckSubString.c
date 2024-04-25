// Program to check if the given substring is a part of the given string
#include <stdio.h>
#include <string.h>
#define MAX 100

int getSize(char str[]){
    int i = 0;
    while(str[i] != '\0') i++;
    return i;
}

int checkSubString(char str[], char subStr[], int strSize, int subStrSize){

    int subStrIndex = 0;
    int flag = 0;
    int j = 0;
    for(int i = 0; i < strSize; i++){
        if(flag) break;
        if(str[i] == subStr[j]){
            for(j = 0; j < subStrSize; j++){
                if(str[i] != subStr[j]){
                    i--;
                    j = 0;
                    break;
                }else{
                    i++;
                    flag = 1;
                }

            }
        }
    }
    return flag;
}

int main(){
    char mainString[MAX], subString[MAX];
    int mainStringSize, subStringSize;

    printf("Enter Main String: ");
    scanf("%[^\n]%*c", mainString);
    printf("Enter Sub String: ");
    scanf("%[^\n]%*c", subString);

    mainStringSize = getSize(mainString);
    subStringSize = getSize(subString);

    int result = checkSubString(mainString, subString, mainStringSize, subStringSize);
    result == 1 ? printf("\nIS Sub-String!") : printf("\nNOT Sub-String");

    return 0;
}