// insertion and deletion in arrays
#include <stdio.h>
#define MAX 100

void insert(int*, int*, int, int);
int delete(int*, int*, int);
void display(int*, int);

int main(){
    int array[MAX];
    int size = 5;
    int flag = 1;

    int location, data;

    for(int i = 0; i < size; i++)
        array[i] = i * 10;

    display(array, size);

    while(flag){
        int option;
        printf("Enter : \n");
        printf("1. To Display Array\n2. To Insert Element\n3. To Delete Element\n0. To Exit\n");
        printf("Option : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            display(array, size);
            break;
        case 2:
            printf("Enter Value :");
            scanf("%d", &data);
            printf("Enter Position to Insert : ");
            scanf("%d" , &location);

            insert(array, &size, location, data);

            break;

        case 3:
            printf("Enter Position to Delete : ");
            scanf("%d", &location);

            printf("Element Deleted : %d ", delete(array, &size, location));

            break;

        case 0:
            flag = 0;
            break;

        default:
            printf("Error: Invalid Option!");
            break;
        }
    }

    
}

void insert(int* arr, int* size, int location, int data){

    if(location < 0 || location > MAX){
        printf("Error: Memory Overflow\n");
        return;
    }

    if(location > *size - 1){
        int top = (*size)++;
        arr[top] = data;
        return;
    }

    for(int i = *size -1 ; i >= location - 1; i--){
        arr[i+1] = arr[i];
    }

    arr[location] = data;

    (*size)++;
}

int delete(int* arr, int* size, int location){

    if(location < 0 || location > *size - 1){
        printf("Error: Out of Bound Memory\n");
        return -1;
    }
    int temp = arr[location];
    for(int i = location - 1; i <= *size - 1; i++){
        arr[i] = arr[i + 1];
    }

    (*size)--;
    return temp;
}

void display(int* arr, int size){
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}