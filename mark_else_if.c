#include<stdio.h>
int main() {

    int mark;

    printf("Enter the mark : ");
    scanf("%d", &mark);

    if(mark < 33){

        printf("you are fall \n");
    }
    else if(mark >= 33 && mark < 50) { 

        printf("you are C gread");
    }
    else if(mark >= 50 && mark < 70) {

        printf("you are B gread");
    }
    else if(mark >= 70 && mark < 80) {

        printf("you are A gread");
    }
    else if(mark > 80 &&  mark < 100) {

        printf("you are A+ gread");
    }

    return 0;
}