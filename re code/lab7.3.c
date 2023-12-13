#include<stdio.h>

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
    for(int x=0 ; x<=2 ; x++){
        for(int y=0 ; y<=2 ; y++){
            printf("%d ",a[x][y]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for(int x=0 ; x<=2 ; x++){
        for(int y=0 ; y<=2 ; y++){
            printf("%d ",b[x][y]);
        }
        printf("\n");
    }

    printf("Matrix C:\n");
    for(int x=0 ; x<=2 ; x++){
        for(int y=0 ; y<=2 ; y++){
            printf("%d ",c[x][y]);
        }
        printf("\n");
    }

    return(0);
}