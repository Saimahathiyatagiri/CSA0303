#include <stdio.h>
int main() {
    int m, n, p, i, j, k, A[10][10], B[10][10], C[10][10];
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d%d", &m, &n);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d%d", &n, &p);
    printf("Enter elements of Matrix A:\n");
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",&A[i][j]);
    printf("Enter elements of Matrix B:\n");
    for(i=0; i<n; i++)
        for(j=0; j<p; j++)
            scanf("%d",&B[i][j]);
    for(i=0; i<m; i++)
        for(j=0; j<p; j++) {
            C[i][j]=0;
            for(k=0; k<n; k++)
                C[i][j]+=A[i][k]*B[k][j];
        }
    printf("Multiplication of Matrix A and B is:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<p; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
