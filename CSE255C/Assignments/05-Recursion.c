// program to convert decimal to hexadecimal using recursion
#include <stdio.h>

void convert(int num){
    if(num > 0){
        int temp = num % 16;
        convert(num / 16);

        if(temp > 9){
            printf("%c ", 'A' + (temp - 10));
        }else{
            printf("%d ", temp);
        }
    }
}

int main(){
    int num = 499;
    convert(num);

    return 0;
}