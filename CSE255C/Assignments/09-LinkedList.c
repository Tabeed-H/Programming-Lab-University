#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

typedef struct Node Node;

Node *head = NULL, *tail = NULL;

Node* newNode(){
    Node *temp = (Node*)malloc(sizeof(Node));
    printf("Enter Data : ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    return temp;
}
void insertAtTail(){
    Node *temp = newNode();
    if(head == NULL){
        head = temp;
        tail = temp;
    }else{
        tail->next = temp;
        tail = temp;
    }
}

void insertAtHead(){
    Node *temp = newNode();
    if(head == NULL){
        head = temp;
        tail = temp;
    }else{
        temp->next = head;
        head = temp;
    }
}

void insertAtPos(){
    if(head == NULL){
        printf("List is Empty Insert At Head\n");
        return;
    }

    Node *temp = newNode();
    int pos;
    printf("Enter Value to Insert After : ");
    scanf("%d", &pos);

    Node *trav = head;
    while(trav != NULL){
        if(trav -> data == pos){
            break;
        }
        trav = trav->next;
    }

    if(trav == NULL){
        printf("Position Not Present in List!\n");
        return;
    }

    temp -> next = trav -> next;
    trav -> next = temp;
}

void insertNode(){
  int choice;
  printf("Insert :\n1. At Head\n2. At Postion\n3. At End\n");
  scanf("%d", &choice);


  switch (choice)
  {
    case 1:
        insertAtHead();
        break;
    case 2:
        insertAtPos();
        break;
    case 3:
        insertAtTail();
        break;
    default:
        break;
  }

}

void deleteNode(){
    int pos;
    printf("Enter Value To Delele : ");
    scanf("%d", &pos);

    Node *temp, *trav;

    if(head -> data == pos){
        temp = head;
        head = head -> next;
        free(temp);
    }else{
        trav = head;
        while(trav -> next -> data != pos){
            trav = trav -> next;
        }

        temp = trav ->next;
        trav -> next = trav -> next -> next;

        if(trav -> next == NULL){
            tail = trav;
        }

        free(temp);
    }
}

void display(){
    Node *trav = head;
    if(head == NULL){
        printf("Empty List!\n");
        return;
    }
    while(trav != NULL){
        printf(" %d ", trav->data);
        trav = trav -> next;
    }
    printf("\n");
}

int main(){
    int flag = 1;


    while(flag){
        int choice;
        printf("Enter Choice:\n1. To Add Node\n2. To Display List\n3. To Delete Node\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            flag = 0;
            break;
        case 1:
            insertNode();
            break;
        case 2:
            display();
            break;
        case 3:
            deleteNode();
            break;
        
        default:
            break;
        }
    }
}

