// output 
// 1
// AB
// 123
// ABCD
// 12345

#include <stdio.h>
int main() {
    
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        if(i % 2 != 0) {
            for(int j=1; j<=i; j++) {
                printf("%d ", j);
            }
        } else {
            char ch = 'A';
            for(int j=1; j<=i; j++) {
                printf("%c ", ch);
                ch++;
            }
        }
        printf("\n");
    }
    return 0;
}