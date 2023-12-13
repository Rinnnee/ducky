#include<stdio.h>

void printMatrix(int[3][3]);

int main(){
    int a[3][3] = {{1,3,2},{1,0,0},{1,2,2}};
    int b[3][3] = {{0,0,5},{7,5,0},{2,1,1}};
    int c[3][3];
    for(int x=0 ; x<=2 ; x++){
        for(int y=0 ; y<=2 ; y++){
            c[x][y] = a[x][y]+b[x][y];
        }
    }

    printf("Matrix A:\n");
    printMatrix(a);
    printf("Matrix B:\n");
    printMatrix(b);
    printf("Matrix C:\n");
    printMatrix(c);
    return(0);
}

void printMatrix(int m[3][3]){
    for(int x=0 ; x<=2 ; x++){
        for(int y=0 ; y<=2 ; y++){
            printf("%d ",m[x][y]);
        }
        printf("\n");
    }
}