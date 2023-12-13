#include<stdio.h>

void convert_to_seconds(int,int,int);

int main(){
    int h=0,m=0,s=0;
    printf("Enter the time (hh:mm:ss)> ");
    scanf("%d:%d:%d",&h,&m,&s);
    convert_to_seconds(h,m,s);
    return(0);
}

void convert_to_seconds(int h,int m,int s){
    int sec;
    sec = h*3600+m*60+s;
    printf("Converting to... %d second(s)",sec);
}