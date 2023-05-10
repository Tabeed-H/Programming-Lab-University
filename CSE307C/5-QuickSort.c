#include <stdio.h>
int n = 8;
int arr[8] = {4,6,2,5,7,9,1,3};


// basic swap function
void swap(int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}


// return the pivot for partition
int partition(int l , int h){
    int pivot = arr[l]; //assume pivot
    int i = l;
    int j = h;

    while(i < j){
        while(i < n  && arr[i] <= pivot ) i++;      // while elements are smaller then the pivot increment i
        while(j >= 0 && arr[j] > pivot) j--;        // while elements are larger then the pivot decrement j
        if(i < j){      
            swap(i, j);         // swap values at position i and j
        }
    }
    swap(j, l);     // happens when j is less then i then j is the correct position for pivot value then swap the current assumed pivot position to the calculate pivot position
    return j;   // return pivot position
}

void quickSort(int l, int h){
    if(l < h){
        int pivot = partition(l, h);
        quickSort(l ,pivot -1);
        quickSort(pivot + 1, h);
    }
}

int main(){
    quickSort(0, n-1);
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}