// wap to display area of circle wite given radius.

#include<stdio.h>

int main(){

    int r;
    float pi = 3.14, area;

    printf("Enter the radius of circle : ");
    scanf("%d", &r);

    area = pi * r * r;

    printf("area of the given circle is : %f", area);

    return 0;
}