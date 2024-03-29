#include <stdio.h>
#define MAX 20

int queue[MAX];
int rear = -1;
const int front = 0;

void enqueue(){
    if(rear == MAX -1){
        printf("Overflow\n");
    }else{
        int element;
        printf("Enter Data : ");
        scanf("%d" , &element);

        queue[++rear] = element;
    }
}

int dequeue(){
    if(rear == -1){
        printf("Empty\n");
    }else{
        int temp = queue[front];
        for(int i = 1; i <= rear; i++){
            queue[i - 1] = queue[i];
        }
        --rear;
        return temp;
    }

    return -1;
}

int display(){
    if(rear == -1){
        printf("Empty!\n");
        return 0;
    }
    for(int i = 0; i <= rear; i++){
        printf(" %d ", queue[i]);
    }

    printf("\n");
}

int main(){
    while(1){
        int choice;
        printf("1. To Enqueue\n2. To Dequeue\n3. To Display\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        
        default:
            break;
        }
    }
}