#include <stdio.h>
#define MAX 100

// for graph
int graph[MAX][MAX] = {
    {0,1,1,0,0},
    {1,0,0,1,1},
    {1,0,0,0,0},
    {0,1,0,0,0},
    {0,1,0,0,0}
    };
int visited[MAX] = {0,0,0,0,0,0,0};

// for stack
int Stack[MAX];
int top = -1;

void push(int element){
    if(top == MAX -1){
        printf("Stack Overflow");
    }else{
        top++;
        Stack[top] = element;
    }
}

int pop(){
    if(top < 0){
        printf("Stack Underflow");
        return -1;
    }else{
        int item = Stack[top];
        top--;
        return item;
    }
}

int DFS(int v, int n){
    int i, u;
    push(v);
    visited[v] = 1;
    while(top >= 0){
        u = pop();
        printf("%d ", u);
        for(int i = 0 ; i < n; i++){
            if(graph[v][i] == 1 && visited[i] != 1){
                push(i);
                visited[i] = 1;
            }
        }
    }

    for(int i = 0 ;i < n ;i++){
        if(visited[i] != 1){
            printf("#%d ", i);
        }
    }
}

int main(){
    int n = 5;      // number of vertices
    int v = 0;      // starting node
    DFS(v, n);
    return 0;
}