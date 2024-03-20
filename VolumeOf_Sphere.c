#include <stdio.h>

int main(){

    int r;
    float v, pi = 3.14;

    printf("Enter the volume is r : ");
    scanf("%d", &r);

    v = 4 * pi * r * r * r / 3;

    printf("volume is : %f", v);

    return 0;
}
