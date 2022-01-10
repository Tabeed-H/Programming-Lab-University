// A five-digit number is entered through the keyboard. Write a
// program to obtain the reversed number and to determine
// whether the original and reversed numbers are equal or not. 

#include <iostream>
using namespace std;

// Function : doNumberReverse
// Reverses a number
// params   int     num          Number to reverse
// returns  int     revNumber    Reversed Number
int doNumberReverse(int num){
    int revNumber = 0;
    while(num){
        int lastDigit = num % 10;
        revNumber = (revNumber * 10) + lastDigit;
        num /= 10;
    }

    return revNumber;
}

// Function : doCheckNumberPalindrome
// Checks if the two numbers are equal or not
// params   int     num_1       Original Number
// params   int     num_2       Reversed Number
void doCheckNumberPalindrome(int num_1, int num_2){
    if(num_1 == num_2)
        cout<<"Original Number and Reversed Number are Same\n";
    else    
        cout<<"Original Number and Reversed Number are NOT Same\n";
}

int main(){
    int num, revNum;
    cout<<"Enter Number\n";
    cin>>num;

    revNum = doNumberReverse(num);
    doCheckNumberPalindrome(num, revNum);

    return 0;
}