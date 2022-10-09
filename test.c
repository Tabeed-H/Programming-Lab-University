#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node Node;

Node *rear = NULL, *front = NULL;

Node* createNewNode(){
    Node *temp = (Node*)malloc(sizeof(Node));
    printf("Enter Data : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    return temp;
}
void enQueue(){
    Node *temp = createNewNode();
    if(rear == NULL){
        rear = temp;
        front = temp;
    }else{
        rear->next = temp;
        rear = temp;
    }
}

void deQueue(){
    Node *temp = front;
    front = temp -> next;
    free(temp);
}

void display(){
    Node *trav = front;
    while(trav != NULL){
        printf(" %d ", trav -> data);
        trav = trav -> next;
    }
    printf("\n");
}

int main(){
    while(1){
        int choice;
        printf("Enter Choice : \n1. To En-Queue\n2. To De-Queue\n3. To Display\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enQueue();
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        
        default:
            break;
        }
    }
}

