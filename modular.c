#include<stdio.h>

int main() {

    int a;

    printf("Enter the number : ");
    scanf("%d", &a);

    printf("%d", a % 2 == 0);
}