#include <stdio.h>
#define MAX 100

// for the graph
   int graph[MAX][MAX] = {
       {0 ,1 ,1 ,1 ,0 ,0},
       {1 ,0 ,0 ,1 ,1 ,0},
       {1, 0, 0, 1, 0, 1},
       {1 ,1 ,1 ,0 ,1 ,1},
       {0 ,1 ,0 ,1 ,0 ,1},
       {0 ,0 ,1 ,1 ,1 ,0}
    };
int visited[MAX] = {0,0,0,0,0,0,0};


// for queue
int Queue[MAX];
int front = -1, rear = -1;


void enQueue(int element){
    if(rear == MAX -1){
        printf("Stack OverFlow");
    }else{
        if(front == -1){
            front = 0;
        }
        rear++;
        Queue[rear] = element;
    }
}

int deQueue(){
    int item;
    if(front == -1 || front > rear){
        printf("Stack Underflow");
        return -1;
    }else{
        item = Queue[front++];
    }
    return item;
}

int BFS( int v, int n){
    int i, u;
    enQueue(v);
    visited[v] = 1;
    while(front <= rear){
        u = deQueue();
        printf("%d ", u);
        for(i = 0; i < n; i++){
            if(graph[v][i] == 1 && visited[i] != 1){
                enQueue(i);
                visited[i] = 1;
            }
        }
    }

// for non-visited graph
    for(int i = 0; i < n; i++){
        if(visited[i] == 0){
            printf(" %d ", i);
        }
    }
}
int main(){
    int n = 6;      // number of vertices
    int v = 1;      // starting node
    BFS(v, n);
    return 0;
}