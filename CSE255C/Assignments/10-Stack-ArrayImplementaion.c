#include <stdio.h>
#define MAX 10

int array[MAX];
int top  = -1;

void push();
int pop();
void display();

int main(){
    int flag = 1;
    int element;
    while(flag){
        int option;
        printf("1. To View List\n2. To Add Element\n3. To Delete Element\n0. To Exit\nEnter Choice : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            display();
            break;
        case 2:
            push();
            break;
        case 3:
            pop();
            break;
        case 0:
            flag = 0;
            break;
        
        default:
            printf("Error: Invalid Option\n");
            break;
        }
    }
}

void display(){
    if(top == -1){
        printf("Error: Empty Stack\n");
        return;
    }

    int current = 0;
    while(current != top + 1){
        printf("%d ", array[current]);
        current++;
    }
    printf("\n");
}

void push(){
    int element;
    printf("Enter Element Value : ");
    scanf("%d", &element);

    if(top < MAX - 1){
        array[++top] = element;
        printf("Message: Added!\n");
    }else{
        printf("Error: Stack Overflow\n");
    }
}

int pop(){
    if(top == -1){
        printf("Error: Empty Stack\n");
        return -1;
    }
    printf("Message: Deleted!\n");
    return array[top--];
}