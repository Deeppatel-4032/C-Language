
// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the numbers : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d ", j); // * karvati star ma pattern print thase
        }
        printf("\n");
    }
    return 0;
}
