#include<stdio.h>

int main(){
    float ph;
    printf("Please enter a pH value> ");
    scanf("%f",&ph);
    if(ph>7){
        if(ph<12){
            printf("Alkaline");
        }
        else{
            printf("Very alkaline");
        }
    }
    else if(ph==7){
        printf("Neutral");
    }
    else if(ph>2){
        printf("Acidic");
    }
    else{
        printf("Very acidic");
    }
    return(0);
}