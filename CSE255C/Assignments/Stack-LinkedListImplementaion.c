#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

typedef struct node* node;
node Head = NULL;

node createNode();
void pushNode();
void popNode();
void display();

int main(){
    int flag = 1;
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
            pushNode();
            break;
        case 3:
            popNode();
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

node createNode(){
    node temp = (node)malloc(sizeof(node));
    temp->next = NULL;
    return temp;
}

void pushNode(){
    int data;
    printf("Enter Data : ");
    scanf("%d", &data);

    node temp = createNode();
    temp->data = data;

    if(Head == NULL){
        Head = temp;
    }else{
        node current = Head;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = temp;
    }

    printf("Message: Added!\n");
}

void popNode(){
    node current = Head;
    node temp;
    if(Head == NULL){
        printf("Error: Empty Stact\n");
        return;
    }

    if(current->next == NULL){
        printf("Message Deleted!\n");
        Head = NULL;
        return;
    }

    while(current->next->next != NULL){
        current = current->next;
    }

    temp = current->next->next;
    current->next = NULL;
    free(temp);
    printf("Message: Deleted!\n");

}

void display(){
    if(Head == NULL){
        printf("Error: Empty Stack\n");
        return;
    }
    node current = Head;
    while(current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}