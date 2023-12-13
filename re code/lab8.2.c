#include<stdio.h>
#define LEN 20
#include<string.h>

int main(){
    char last[15];
    char first[15];
    char full[LEN];
    printf("Enter your last name> ");
    scanf("%s",last);
    printf("Enter your first name> ");
    scanf("%s",first);
    if(strlen(last)+strlen(first)<20){
        strcpy(full,first);
        strcat(full," ");
        strcat(full,last);
    }
    else{
        strncpy(full,first,1);
        strcat(full,". ");
        strcat(full,last);
    }
    printf("%s",full);
}