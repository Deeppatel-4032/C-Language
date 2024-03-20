#include<stdio.h>

int main(){

    float base, height, area;

    printf("Enter the base area : ");
    scanf("%f", &base);

    printf("Enter the height area : ");
    scanf("%f", &height);

    area = (base * height) / 2;

    printf("area of triangle is : %0.0f", area);

    return 0;
}