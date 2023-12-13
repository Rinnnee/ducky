#include<stdio.h>

int main(){
    int first,second,row,letter,linebox,reset_eachbox=1;
    printf("Enter the first number : ");
    scanf("%d",&first);
    printf("Enter the second number : ");
    scanf("%d",&second);
    
    for (linebox=1 ; linebox<=second ; linebox++){
        for (row=1 ; row<=first ; row++){
            reset_eachbox  = 1;
            for (letter=1 ; letter<=first ; letter++){
                if (letter>row){
                    printf(" ");                
                }
                else{
                    printf("*");
                }
                if (letter==first && reset_eachbox<linebox){
                    letter=0;
                    reset_eachbox ++;
                }
            }
            printf("\n");
        }
    }
    return(0);
}