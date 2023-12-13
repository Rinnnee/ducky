#include<stdio.h>
#include<math.h>

int main(){
    float r,sh_area,sq_area,ci_area;
    printf("Please enter a radius> ");
    scanf("%f",&r);
    ci_area = (M_PI*r*r)/2;
    sq_area = 2*r*r;
    sh_area = sq_area-ci_area;
    printf("Shaded area is %f.",sh_area);
    return(0);
}