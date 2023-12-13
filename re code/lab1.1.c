#include<stdio.h>
#define PI 3.14159

int main(){
    float dia,area,cir,r;
    printf("Please Enter a diameter> ");
    scanf("%f",&dia);
    r = dia/2;
    area = PI*r*r;
    cir = 2*PI*r;
    printf("The area is %.4f\n",area);
    printf("The circumference is %.4f",cir);
    return(0);
}