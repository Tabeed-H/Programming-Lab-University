#include <stdio.h>
#include <stdlib.h>

// Function decleratoins
void swap(int* a, int* b);
void sort(int profit[],int weight[], int size );    // this function will sort the profit and weight arrays based on the profit-to-weight ratio
double maximizeProfit(int profit[], int weight[], int size, int sackCapacity);     // this function will calculate the maximun profit possible

// Main driver function
int main(){
    int weight[] = {10,20,30};  // sample object weights
    int profit[] = {60, 100, 120};  // sample object profits
    int capacity = 50;      // capacity of the knapsack
    int size = sizeof(weight)/sizeof(weight[0]);        // total number of objects

    printf("Maximum Value : %f\n", maximizeProfit(profit, weight, size, capacity));

    return 0;
}

// Basic Swap function
void swap(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


// Sorting function that sorts the weight and profits of the object based on the profit-to-weight ration
void sort(int profit[], int weight[], int size){
    double profitToWeightRatio[20];     // array that stores the profit-to-weight ration for all objects
    for(int i = 0; i < size; i++){
        profitToWeightRatio[i] = profit[i] / weight[i];
    }

    // sorts the profits and weights arrays
    for(int i = 0; i < size-1; i++){
        int maxRatioIndex = i;
        for(int j = i + 1; j < size; j++){
            if(profitToWeightRatio[j] > profitToWeightRatio[maxRatioIndex])
                maxRatioIndex = j;
        }

        swap(profit + i, profit + maxRatioIndex);
        swap(weight + i, weight + maxRatioIndex);
    }
}

double maximizeProfit(int profit[], int weight[], int size, int sackCapacity){
    // Sorting
    sort(profit, weight, size);

    double answer = 0;      // Stores the maximun profit
    for(int i = 0; i < size; i++){
        int currentItemWeight = weight[i];  // weight of the current object
        int currentItemProfit = profit[i];  // profit of the current object

        double profitToWeightRatio = profit[i] / weight[i];     // calculate the profit-to-weight ratio for the curret object
 

        //checks for capcity in the bag
        if(sackCapacity >= currentItemWeight){
            answer += currentItemProfit;
            sackCapacity -= currentItemWeight;
        }else{
            answer += profitToWeightRatio * sackCapacity;
            sackCapacity = 0;
            break;
        }
    }

    return answer;
}
