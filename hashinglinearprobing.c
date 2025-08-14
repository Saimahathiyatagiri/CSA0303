#include <stdio.h>
#define SIZE 10
int main() {
    int hash[SIZE]={0}, n, x, pos, i, j;
    printf("Count: "); scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Val: "); scanf("%d",&x);
        pos = x % SIZE;
        while(hash[pos]!=0) pos=(pos+1)%SIZE;
        hash[pos]=x;
    }
    printf("Hash Table: ");
    for(j=0;j<SIZE;j++) printf("%d ", hash[j]);
}
