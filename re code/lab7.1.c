#include<stdio.h>

int main(){
    int n;
    float sum=0;
    printf("Please enter number of students> ");
    scanf("%d",&n);
    float h[n];
    for(int x=0 ; x<n ; x++){
        printf("Please enter student height [%d]> ",x+1);
        scanf("%f",&h[x]);
    }
    for(int x=0 ; x<n ; x++){
        sum+=h[x];
    }
    printf("Average height: %.2f",sum/n);
    return(0);
}