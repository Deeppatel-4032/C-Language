// oddnumber triAngel pattern
// 1
// 135
// 1357
// 135579

#include <stdio.h>

int main() {

    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        int a = n;
        for(int j=1; i<=a; j++) {
            printf("%d ", j);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}