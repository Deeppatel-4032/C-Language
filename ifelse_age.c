#include<stdio.h>

int main() {

    int age;

    printf("Enter the your age : ");
    scanf("%d", &age);
 
    if(age >= 18){
        printf("you are adult \n");
    }
    else if(age > 13 && age < 18){
        printf("you are teenager \n");
    }
    else{
        printf("you are childe \n");
    }

    printf("Thank you");

    return 0;
}