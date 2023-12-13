#include<stdio.h>

int main(){
    int n,x,sum=0;
    printf("Please enter a positive number> ");
    scanf("%d",&n);
    for(x=1;x<n;x++){
        if(x%3==0 || x%5==0){
            printf("%d\n",x);
            sum += x;
        }
    }
    printf("Summation: %d",sum);
    return(0);
}