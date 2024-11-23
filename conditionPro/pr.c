#include<stdio.h>

int main() {

  int age;

  printf("Enter the your age : ");
  scanf("%d", &age);

  if(age >= 18) {

    printf("you adult");

  }
  else if(age > 13 && age < 18){

    printf("you are teeneger");
  }
  else {

    printf("you are not adult");
  }

  return 0;
}