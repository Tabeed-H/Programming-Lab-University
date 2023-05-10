// 0/1 knapsack problem solved using recursion
#include <stdio.h>
#include <stdlib.h>


// function returns the max of two numbers
int maxOf(int a, int b){
    return a > b ? a : b;
}


// recursive function
// wt = weight array
// val = profit array
// W total weight of the knapsack remaining
// n number of items left
int knapsack(int wt[], int val[], int W, int n){
    // base condition
    // return 0 if either the number of items left is 0 or the knapsack can't include any other item
    if(n == 0 || W == 0)
        return 0;

    // check if the current weight of the item can be included in the knapsack
    if(wt[n - 1] <= W){
        // if the item can be included check what would be feasible
        // to include the item or not include the item
        // using the max function to check whether including the item will give the max profit or not includeing the item will give the max profit
        return maxOf(val[n] + knapsack(wt, val, W - wt[n], n -1), knapsack(wt, val, W, n-1));
    }else{
        // item cant be included into the knapsack
        return knapsack(wt, val, W, n-1);
    }
}


int main(){
    int wt[] = {2,3,4,5};   // weight array
    int val[] = {1,2,5,6};  // profit array
    int n = 4;  // total number of items
    int W = 7;  // total capacity of the knapsack

    int maxProfit = knapsack(wt, val, W, n);

    printf("%d", maxProfit);

    return 0;
}