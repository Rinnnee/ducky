#include<stdio.h>
#include<math.h>
#define DOW 500

int main(){
    float price,i_year,i_month,n,total;
    printf("Please enter the purchase price> ");
    scanf("%f",&price);
    printf("Please enter the annual interest rate> ");
    scanf("%f",&i_year);
    printf("Please enter the total number of payments> ");
    scanf("%f",&n);
    printf("******************************\n");
    i_month = i_year/12;
    price -= DOW;
    total = (i_month*price)/(1-pow(1+i_month,-n));
    printf("The amount borrowed: $%.2f\n",price);
    printf("The monthly payment: $%.2f",total);
}