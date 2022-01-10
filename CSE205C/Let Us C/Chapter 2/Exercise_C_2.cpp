// Any integer is input through the keyboard. Write a program to
// find out whether it is an odd number or even number. 

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Number\n";
    cin>>num;
    (num % 2 == 0) ? cout<<"Number is Even\n" : cout<<"Number is Odd\n";

    return 0;
}

// TEST CASES
// 2
// Result : Number is Even 
// 5
// Result : Number is Odd
// 8
// Result : Number is Even 