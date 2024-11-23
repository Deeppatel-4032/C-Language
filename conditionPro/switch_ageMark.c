#include <stdio.h>

int main()
{

    int sim, lan;

    printf("1 press ==> jio \n");
    printf("2 press ==> vi \n");
    printf("3 press ==> aitel \n");
    printf("4 press ==> BSNL \n");

    printf("choice the SIM :");
    scanf("%d", &sim);

    printf("1 press the hindi \n");
    printf("2 press the gujarati \n");
    printf("3 press the marathi \n");

    printf("choice the language :");
    scanf("%d", &lan);

    switch (sim)
    {
    case 1:
        printf("sim is jio \n");

        switch (lan)
        {
        case 1:
            printf("hindi");
            break;
        case 2:
            printf("gujarati");
            break;
        case 3:
            printf("marathi");
            break;
        default:
            printf("you are wrong language choice");
        }
        break;
    case 2:
        printf("sim is vi \n");
        switch (lan)
        {
        case 1:
            printf("hindi");
            break;
        case 2:
            printf("gujarati");
            break;
        case 3:
            printf("marathi");
            break;
        default:
            printf("you are wrong language choice");
        }
        break;
    case 3:
        printf("sim is aitel \n");
        switch (lan)
        {
        case 1:
            printf("hindi");
            break;
        case 2:
            printf("gujarati");
            break;
        case 3:
            printf("marathi");
            break;
        default:
            printf("you are wrong language choice");
        }
        break;
    case 4:
        printf("sim is BSNL \n");
        switch (lan)
        {
        case 1:
            printf("hindi");
            break;
        case 2:
            printf("gujarati");
            break;
        case 3:
            printf("marathi");
            break;
        default:
            printf("you are wrong language choice");
        }
        break;
    default:
        printf("you are wrong SIM choice.....!");
    }
    return 0;
}