// WAP to raise a base to power
#include <stdio.h>

int expo(int base, int power){
    if(power == 0)
        return 1;

    return base * expo(base, power -1);
}

int main(){
    int base = 2;
    int power = 3;

    printf("%d", expo(base, power));

    return 0;
}