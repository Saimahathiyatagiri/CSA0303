#include <stdio.h>
int main() {
    int n, i, a=0, b=1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d %d", a, b);
    for(i=2; i<n; i++) {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
