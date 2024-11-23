//patten triAngleUlta
// 12345
// 1234
// 123
// 12
// 1

#include <stdio.h>
int main() {

    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    int a = n;

    for(int i=1; i<=5; i++) {
        for(int j=1; j<=a; j++) {
            printf("%d ", j);
        }
        a--;
        printf("\n");
    }
    return 0;
}