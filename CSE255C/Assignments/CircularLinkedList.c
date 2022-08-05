#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
typedef struct node* node;

node tail = NULL;

node createNode(){
    node temp = (node)malloc(sizeof(node));
    temp->next = temp;
    return temp;
}
void insertNodeAtBegin();
void display();

int main(){
    int flag = 1;
    while(flag){
        int option;
        printf("1. To View List\n2. To Add Node At Begining\n0. To Exit\n");
        printf("Enter Choice : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            display();
            break;
        case 2:
            insertNodeAtBegin();
            break;
        case 0:
            flag =0 ;
            break;
        default:
            printf("Error: Invalid Option!\n");
            break;
        }
    }
}

void insertNodeAtBegin(){
    node temp = createNode();
    printf("Enter Data: ");
    scanf("%d", &temp->data);

    if(tail == NULL){
        tail = temp;
    }else{
        temp->next = tail->next;
        tail->next = temp;
        tail = temp;
    }
}

void display(){
    node current = tail->next;
    do{
        printf("%d ", current->data);
        current = current->next;
    }while(current != tail->next);
    printf("\n");
}