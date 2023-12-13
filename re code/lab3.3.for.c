#include<stdio.h>
#include<math.h>
int main(){
    int n,j,sum=0;
    printf("Please enter a positive number> ");
    scanf("%d",&n);
    for(j=0;j<=n;j++){
        sum += 3*pow(2,j);
        printf("j = %d, sum = %d\n",j,sum);
    }
    printf("Summation: %d",sum);
    return(0);
}