#include<stdio.h>

int maximum(int,int,int,int);
int minimum(int,int,int,int);
void trim_mean(int,int,int,int);

int main(){
    int a,b,c,d;
    printf("The judges enter their scores> ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    trim_mean(a,b,c,d);
    return(0);
}

void trim_mean(int a,int b,int c,int d){
    int max = maximum(a,b,c,d);
    int min = minimum(a,b,c,d);
    printf("Max = %d\n",max);
    printf("Min = %d\n",min);
    float trim = (a+b+c+d-max-min)/2;
    printf("The score = %.2f",trim);
}

int maximum(int a,int b,int c,int d){
    int max;
    max = (a>=b && a>=c && a>=d)?a:
        (b>=a && b>=c && b>=d)?b:
        (c>=b && c>=a && c>=d)?c:
        d;
    return(max);
}

int minimum(int a,int b,int c,int d){
    int min;
    min = (a<=b && a<=c && a<=d)?a:
        (b<=a && b<=c && b<=d)?b:
        (c<=b && c<=a && c<=d)?c:
        d;
    return(min);
}