// WAP to convert decimal to binary using recursino
#include <stdio.h>

void conv(int num){
    if(num == 0){
        printf("0");
    }

    if(num == 1){
        printf("1");
    }

    conv(num / 2);
    printf("%d", num % 2);
}

int main(){
    int num = 9;
    conv(num);

    return 0;
}
