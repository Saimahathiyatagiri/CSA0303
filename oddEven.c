#include <stdio.h>
int main() {
    int n, num, i;
    printf("Enter the count of numbers: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        printf("Enter number: ");
        scanf("%d", &num);
        if(num%2==0)
            printf("%d is Even\n", num);
        else
            printf("%d is Odd\n", num);
    }
    return 0;
}
