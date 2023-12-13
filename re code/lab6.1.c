#include<stdio.h>

int main(){
    int m=10,n=5;
    printf("  m   n *mp *np  &m  &n\n");
    printf("%3d %3d %p %p\n",m,n,&m,&n);
    int *mp,*np;
    printf("%3d %3d %p %p\n",m,n,&m,&n);
    mp = &m;
    printf("%3d %3d %3d %3d %p %p\n",m,n,*mp,*np,&m,&n);
    np = &n;
    printf("%3d %3d %3d %3d %p %p\n",m,n,*mp,*np,&m,&n);
    *mp = *mp+*np;
    printf("%3d %3d %3d %3d %p %p\n",m,n,*mp,*np,&m,&n);
    *np = *mp-*np;
    printf("%3d %3d %3d %3d %p %p\n",m,n,*mp,*np,&m,&n);
    return(0);
}