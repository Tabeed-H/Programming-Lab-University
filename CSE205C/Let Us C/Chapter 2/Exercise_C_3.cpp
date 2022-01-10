// Any year is input through the keyboard. Write a program to
// determine whether the year is a leap year or not. 

#include <iostream>
using namespace std;

int main(){
    int enteredYear;
    cout<<"Enter Year\n";
    cin>>enteredYear;

    if((enteredYear % 4 == 0) && ((enteredYear % 400 == 0) || (enteredYear % 100 != 0)))
        cout<<enteredYear<<" is a Leap Year\n";
    else
        cout<<enteredYear<<" is not a Leap Year\n";

    return 0;
}

// TEST CASES
// 2022
// Result : 2022 is not a Leap Year
// 2016
// Result : 2016 is a Leap Year