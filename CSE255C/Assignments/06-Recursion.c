// program to convert decimal to octal
#include <stdio.h>

void convert(int num){
    if(num > 0){
        convert(num / 8);
        printf("%d ", num % 8);
    }
}

int main(){
    int num = 9;
    convert(num);

    return 0;
}