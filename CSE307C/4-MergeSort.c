#include <stdio.h>
#define MAX 10
int n = 5;
int arr[] = {1,3,4,2,0};

// merge function
void merge(int left, int mid, int right){
    int leftArraySize = mid - left + 1;     // calculate the size of left partition
    int rightArraySize = right - mid;       // calculate the size of right partition

    int leftArray[MAX], rightArray[MAX];    // declare two temporary arrays that will store the left and right partition values respectively


    // load left partition values into leftArray
    for(int i = 0; i < leftArraySize; i++){
        leftArray[i] = arr[left + i];
    }

    // load right partition values into rightArray
    for(int i = 0; i < rightArraySize; i++){
        rightArray[i] = arr[mid + 1 + i];
    }

    // i to index over leftArray
    // j to index over rightArray
    // k to index over arr (current array)
    int i = 0, j = 0;
    int k = left;

    while(i < leftArraySize && j < rightArraySize){
        // if element in left array is smaller then element in right array and else
        if(leftArray[i] < rightArray[j]){
            arr[k] = leftArray[i];
            i++;
        }else{
            arr[k] = rightArray[j];
            j++;
        }
        k++;    // increment k 
    }

    // if remaining items in leftArray
    while(i < leftArraySize){
        arr[k] = leftArray[i];
        i++;k++;
    }
    // if remainig items in rightArray
    while(j < rightArraySize){
        arr[k] = rightArray[j];
        j++; k++;
    }

}

void mergeSort(int left, int right){
    if(left < right){
        int mid = (left + right) / 2;
        mergeSort(left , mid);
        mergeSort(mid + 1, right);
        merge(left, mid, right);
    }
}

int main(){
    mergeSort(0,n-1);
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}