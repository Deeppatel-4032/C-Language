// ? true condition thay tiyare
// : nahi to false hoga
#include<stdio.h>

int main() {

    int age;

    printf("Enter the your age : ");
    scanf("%d", &age);

    (age >= 18) ? printf("adult") : printf("not adult");

 return 0;
}