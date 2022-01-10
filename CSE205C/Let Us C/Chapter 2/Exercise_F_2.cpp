// A library charges a fine for every book returned late. For first
// 5 days the fine is 50 paise, for 6-10 days fine is one rupee and
// above 10 days fine is 5 rupees. If you return the book after 30
// days your membership will be cancelled. Write a program to
// accept the number of days the member is late to return the
// book and display the fine or the appropriate message

#include <iostream>
using namespace std;

void calculateFine(int n){
    float totalFine = 0;
    if(n <= 5){
        totalFine += (n * 0.5);
    }

    if(n > 5 && n <= 10){
        totalFine += (2.5 + ((n - 5) * 1));
    }

    if(n > 10){
        totalFine += (2.5 + 5 + ((n - 10) * 5));
    }

    cout<<"Total Fine : "<<totalFine<<endl;

}

int main(){
    int daysExceeded;
    cout<<"Enter Number of Days Exceeded\n";
    cin>>daysExceeded;

    if((daysExceeded > 0) && (daysExceeded <= 30))
        calculateFine(daysExceeded);
    else if(daysExceeded > 30)
        cout<<"Library MemberShip Expired!\n";
    else
        cout<<"Enter Valid Number of Days!\n";

    return 0;
}