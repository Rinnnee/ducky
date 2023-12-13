#include<stdio.h>

int main(){
    int n,x,y,status;
    printf("Please enter a positive number> ");
    status = scanf("%d",&n);
    if(status==0){
        scanf("%c",&n);
        printf("%c is an invalid input.",n);
    }
    else if(n<=0){
        printf("%d is not a positive number.",n);
    }
    else if(n<2){
        printf("%d is less then 2.",n);
    }
    else{
        if(n%2==0){
            for(x=1 ; x<=n ; x++){
                for(y=1 ; y<=n-x ; y++){
                    printf("  ");
                }
                for(y=1 ; y<=x*2-1 ; y++){
                    printf("* ");
                }
                printf("\n");
            }
        }
        else{
            for(x=n ; x>=1 ; x--){
                for(y=1 ; y<=n-x ; y++){
                    printf("  ");
                }
                for(y=1 ; y<=x*2-1 ; y++){
                    printf("* ");
                }
                printf("\n");
            }
        }
    }
    return(0);
}