// write a program containing the following functions
// scan an array
// display an array
// sum of the array

#include <stdio.h>
#define MAX 100

void createArray(int*, int);
void display(int*, int);
int sumArray(int*, int);

int main(){
    int array[MAX];
    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    createArray(array, size);
    display(array, size);
    
    int result = sumArray(array, size);
    printf("Sum of Array Elements : %d", result);

    return 0;
}

void createArray(int* arr, int size){
    if(size > MAX){
        printf("Error: Memory Overflow!");
    }else{
        for(int i = 0; i < size; i++){
            printf("Enter Element [%d] : ", i + 1);
            scanf("%d", &arr[i]);
        }
    }
}

void display(int* arr, int size){
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int sumArray(int* arr, int size){
    int sum = 0; 
    for(int i = 0; i < size; i++)
        sum = sum + arr[i];

    return sum;
}