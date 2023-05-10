#include <stdio.h>
#define MAX 100

int A[MAX][MAX];
int B[MAX][MAX];

int MM(int m, int n,int q, int p){
    if(n != q){
        printf("Cannot multiply Matrices!!");
        return -1;
    }
    int result[MAX][MAX];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p ; j++){
            int temp = 0;
            for(int k = 0; k < n; k++){
                temp += A[i][k] * B[k][j];
            }
            result[i][j] = temp;
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int main(){
    int m, n, q, p;
    printf("Enter Size of Matric A : (row coloumn)");
    scanf("%d %d", &m, &n);
    printf("Enter Size of Matric B : (row coloumn)");
    scanf("%d %d", &q, &p);

    printf("Enter Elements for Matric A :\n");
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < n; j++){
            printf("Enter Element At %d-%d", i, j);
            scanf("%d", &A[i][j]);
        }
    }
     printf("Enter Elements for Matric B :\n");
    for(int i = 0; i < q ; i++){
        for(int j = 0; j < p; j++){
            printf("Enter Element At %d-%d", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    MM(m,n,q,p);
}