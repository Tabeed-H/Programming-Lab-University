#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node Node;

Node *top = NULL;

Node* createNewNode(){
    Node *temp = (Node*)malloc(sizeof(Node));
    printf("Enter Data : ");
    scanf("%d", &temp->data);

    temp->next = NULL;
    return temp;
}

void push();
void pop();
void display();

int main(){
    int flag = 1;
    while(flag){
        int choice;
        printf("Enter choice\n1. To push\n2. To pop\n3. To View\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        
        default:
            flag = 0;
            break;
        }
    }
}

void push(){
    Node* temp = createNewNode();
    if(top == NULL){
        top = temp;
    }else{
        temp->next = top;
        top = temp;
    }
}

void pop(){
    if(top == NULL){
        printf("Empty!\n");
    }else{
        Node* temp = top;
        top = temp->next;
        free(temp);
    }
}

void display(){
    if(top == NULL){
        printf("Empty!\n");
    }else{
        Node *trav = top;
        while(trav != NULL){
            printf(" %d ", trav->data);
            trav = trav -> next;
        }
    }
    printf("\n");
}