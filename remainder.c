#include<stdio.h>

int main(){

    int a, b, q, r;

    printf("Enter the dividend : ");
    scanf("%d", &a);

    printf("Enter the divisor : ");
    scanf("%d", &b);

    q = a/b;

    r = a - b * q;

    printf("The remainder Whan %d is divided by %d is : %d ", a, b, r);

    return 0;
}