#include<stdio.h>

int main(){
    int s;
    printf("Please enter a wind speed> ");
    scanf("%d",&s);
    (s<25)?printf("Not a strong wind at %d mph",s):
    
    (25<=s && s<=38)?printf("Strong wind at %d mph",s):
    
    (39<=s && s<=54)?printf("Gale at %d mph",s):
    
    (55<=s && s<=72)?printf("Whole gale at %d mph",s):
    
    printf("Hurricane at %d mph",s);
    
    return(0);
}