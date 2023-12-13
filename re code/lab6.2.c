#include<stdio.h>

void readData(int*);
void calculateTime(int,int*,int*,int*);
void printData(int,int,int,int);

int main(){
    int h,m,s,copys;
    readData(&s);
    copys = s;
    calculateTime(s,&h,&m,&s);
    printData(h,m,s,copys);
    return(0);
}

void readData(int*s){
    printf("Enter time (in seconds): ");
    scanf("%d",s);
}

void calculateTime(int s,int*h,int*m,int*s1){
    *h = s/3600;
    s -= *h*3600;
    *m = s/60;
    s -= *m*60;
    *s1 = s;
}

void printData(int h,int m,int s,int s1){
    printf("Time: %d seconds\n",s1);
    printf("Hour(s): %d\n",h);
    printf("Minute(s): %d\n",m);
    printf("Second(s): %d",s);
}