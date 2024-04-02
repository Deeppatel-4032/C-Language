#include <stdio.h>

int main(){

    int eng, guj, acc, eco, ba, totel;
    float  ans;

    printf("Enter the Eng mark : ");
    scanf ("%d", &eng);

    printf("Enter the guj mark : ");
    scanf ("%d", &guj);

    printf("Enter the acc mark : ");
    scanf ("%d", &acc);

    printf("Enter the Eco mark : ");
    scanf ("%d", &eco);

    printf("Enter the ba mark : ");
    scanf ("%d", &ba);

    totel = eng + guj + acc + eco + ba;

    ans = totel / 5;

    printf("sum of 5 subject is : %d \n", totel);
    printf("Percentage of 5 subject is : %f", ans);

    return 0;
}