//write a program to find if a character entered by user is upper case or lower case not.
#include <stdio.h>

int main() {

    char ch;

    printf("Enter the English character :");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {

        printf("English latter is a uppercase \n");
    }
    else if(ch >= 'a' && ch <= 'z') {

        printf("English latter is a lowercase \n");
    }
    else {

        printf("not English latter....! \n\n");
    }

    printf("Thank you");

    return 0;

}