#include<stdio.h>

void readData(int *);
void findFibonacci(int [], int);
void printFibonacci(int [], int);

int main(){
    int n;
    readData(&n);
    int fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;
    findFibonacci(fibo,n);
    printFibonacci(fibo,n);
}

void readData(int *n){
    printf("Please enter a number for the Fibonacci sequence> ");
    scanf("%d",n);
}

void findFibonacci(int fibo[], int n){
    for(int x=2 ; x<n ; x++){
        fibo[x] = fibo[x-1]+fibo[x-2];
    }
}

void printFibonacci(int fibo[], int n){
    printf("Index  Element\n");
    for(int x=0 ; x<n ; x++){
        printf("%3d %8d\n",x,fibo[x]);
    }
}