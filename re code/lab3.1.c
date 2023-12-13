#include<stdio.h>

int main(){
    int i=0,j=0,m=0,n=0,p=0;
    printf(" i  j  m  n  p\n");
    printf("%2d %2d %2d %2d %2d\n",i,j,m,n,p);
    i = 4;
    printf("%2d %2d %2d %2d %2d\n",i,j,m,n,p);
    j = 8;
    printf("%2d %2d %2d %2d %2d\n",i,j,m,n,p);
    n = ++i*--j;
    printf("%2d %2d %2d %2d %2d\n",i,j,m,n,p);
    m = i+j--;
    printf("%2d %2d %2d %2d %2d\n",i,j,m,n,p);
    p = i+j;
    printf("%2d %2d %2d %2d %2d\n",i,j,m,n,p);
    return(0);    
}