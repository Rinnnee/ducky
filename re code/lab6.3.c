#include<stdio.h>

void readData(int*,int*,int*,int*);
void order(int*,int*);
void printData(int,int,int,int);

int main(){
    int a,b,c,d;
    readData(&a,&b,&c,&d);
    order(&a,&b);
    order(&a,&c);
    order(&a,&d);
    order(&b,&c);
    order(&b,&d);
    order(&c,&d);
    printData(a,b,c,d);
    return(0);
}

void readData(int*a,int*b,int*c,int*d){
    printf("Enter four numbers separated by blanks> ");
    scanf("%d %d %d %d",a,b,c,d);
}

void order(int*x,int*y){
    int z;
    if(*x>*y){
        z = *y;
        *y = *x;
        *x = z;
    }
}

void printData(int a,int b,int c,int d){
    printf("num1: %d\n",a);
    printf("num2: %d\n",b);
    printf("num3: %d\n",c);
    printf("num4: %d",d);
}