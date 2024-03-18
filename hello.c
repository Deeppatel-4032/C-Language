#include<stdio.h>

int main(){

    int age = 23;
    int a, b;
    float pi = 3.14;
    char name = 'A';

    // age printf code
    printf("Enter the age :", age);
    scanf("%d", &age);

    printf("age is : %d \n", age);

    // sum code
    printf("Enter the a value: ");
    scanf("%d", &a);

    printf("Enter the b value: ");
    scanf("%d", &b);


    printf("sum is a and b: %d \n",a + b);

    // pi value code (float)
    printf("pi value is %f \n", pi);

    // name value code (char)
    printf("charcter name is  %c \n", name);

    return 0;
}