#include<stdio.h>

int main(){

    int amount;
    float p, r, t, si;

    printf("Enter the principal : ");
    scanf("%f", &p);

    printf("Enter the rate : ");
    scanf("%f", &r);

    printf("Enter the time : ");
    scanf("%f", &t);

    si = (p * r * t)/100;

    amount = si + p;

    printf("simple interest is a : %f\n", si);

    printf("amount is a : %d", amount);

}