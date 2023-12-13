#include<stdio.h>
#include<string.h>
int main(){
    char names[4][15] = {"G. Washington","J. Adams","T. Jefferson","J. Madison"};
    char init[4][3];
    char last[4][15];
    for(int x=0 ; x<=3 ; x++){
        strncpy(init[x],names[x],2);
        init[x][2] = '\0';
        strcpy(last[x],&names[x][3]);
    }
    printf("Initial First Name              Last Name\n");
    for(int x=0 ; x<=3 ; x++){
        printf("%18s        %15s\n",init[x],last[x]);
    }
    return(0);
}