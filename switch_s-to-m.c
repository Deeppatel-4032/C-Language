#include<stdio.h>

int main() {

    char day;

    printf("press the capitale letter M for Monday \n");
    printf("press the capitale letter T for Tuesday \n");
    printf("press the capitale letter W for Wednesday \n");
    printf("press the small letter t for thursday \n");
    printf("press the capitale letter F for friday \n");
    printf("press the small letter s for saturday \n");
    printf("press the capitale letter S for sunday \n\n");

    printf("Enter your choice day : ");
    scanf("%c", &day);

    switch(day) {
        case 'M' : printf("Monday \n");
                    break;
        case 'T' : printf("Tuesday \n");
                    break;
        case 'W' : printf("Wednesday \n");
                    break;
        case 't' : printf("thursday \n");
                    break;
        case 'F' : printf("Friday \n");
                    break;
        case 's' : printf("saturday \n");
                    break;
        case 'S' : printf("Sunday \n");
                    break;
        default : printf("you are wrong choice");
    }
    return 0;
}