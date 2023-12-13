#include<stdio.h>
#include<math.h>
int main(){
    int n,j=0,sum=0;
    printf("Please enter a positive number> ");
    scanf("%d",&n);
    while(j<=n){
        sum += 3*pow(2,j);
        printf("j = %d, sum = %d\n",j,sum);
        j++;
    }
    printf("Summation: %d",sum);
    return(0);
}