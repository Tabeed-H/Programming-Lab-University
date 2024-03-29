#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node Node;

Node *root = NULL;

Node* createNewNode(int data){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void create(int data){
    Node *temp = createNewNode(data);
   if(root == NULL){
    root = temp;
    return;
   }

   Node *trav = root, *prev = NULL;
   while(trav != NULL){
    prev = trav;
    if(data > trav->data){
        trav = trav->right;
    }else{
        trav = trav->left;
    }
   }

   if(data > prev->data){
    prev->right = temp;
   }else{
    prev->left = temp;
   }
}

void inOrder(Node *node){
    if(node != NULL){
        inOrder(node->left);
        printf(" %d ", node->data);
        inOrder(node->right);
    }
}

void preOrder(Node *node){
    if(node != NULL){
        printf(" %d ", node -> data);
        preOrder(node -> left);
        preOrder(node -> right);
    }
}

void postOrder(Node *node){
    if(node != NULL){
        postOrder(node -> left);
        postOrder(node -> right);
        printf(" %d ", node -> data);
    }
}

int main(){
    while(1){
        int choice;
          int data;
        printf("1. To Add Node\n2. To Search\n3. To Delete\n4. To View In-Order\n5. To View Preordder\n6. To View Post Order\n");
        scanf("%d" , &choice);

        switch (choice)
        {
        case 1:
          
            printf("enter data: ");
            scanf("%d", &data);
            create(data);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            inOrder(root);
            break;
        case 5:
            preOrder(root);
            break;
        case 6:
            postOrder(root);
            break;
        default:
            break;
        }
    }
}