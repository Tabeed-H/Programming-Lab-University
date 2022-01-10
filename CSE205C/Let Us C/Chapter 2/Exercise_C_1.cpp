// If cost price and selling price of an item is input through the
// keyboard, write a program to determine whether the seller has
// made profit or incurred loss. Also determine how much profit
// he made or loss he incurred. 

#include <iostream>
using namespace std;

float calculateProfitLoss(float diff, float* costPrice){
    return ((diff * 100) / *costPrice);
}

int main(){
    float costPrice, sellingPrice, diff;
    cout<<"Enter Cost Price Followed By Selling Price : \n";
    cin>>costPrice>>sellingPrice;

    if(sellingPrice >= costPrice){
        diff = sellingPrice - costPrice;
        cout<<"The Seller Made a "<<(calculateProfitLoss(diff, &costPrice))<<"% Profit.";
    }else{
        diff = costPrice - sellingPrice;
       cout<<"The Seller Made a "<<(calculateProfitLoss(diff, &costPrice))<<"% Loss.";
    }

    return 0;

}

// TEST CASES
// 35 55
// Result : The Seller Made a 57.1429% Profit.
// 25 25
// Result : The Seller Made a 0% Profit.
// 25 20
// Result : The Seller Made a 20% Loss.