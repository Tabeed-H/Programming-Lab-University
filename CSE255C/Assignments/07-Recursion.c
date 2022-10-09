// A program to calculate the factorial of a number using recursion                        
#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n - 1);
}

int main(){
    int a = 3;
    printf("%d", factorial(a));

    return 0;
}