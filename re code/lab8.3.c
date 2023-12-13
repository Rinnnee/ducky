#include<stdio.h>
#include<string.h>
int main(){
    char w[10],re_w[10];
    printf("Enter a word> ");
    scanf("%s",&w);
    strcpy(re_w,w);
    if(strcmp(w,strrev(re_w))==0){
        printf("%s is a palindrome.",w);
    }
    else{
        printf("%s is not a palinfrome and its reverse is %s.",w,re_w);
    }
    return(0);
}