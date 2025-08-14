#include <stdio.h>
int main() {
    int a[50], n, i, key;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)  scanf("%d",&a[i]);
    printf("Enter the element to find: \n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
        if(a[i]==key) break;
    printf(a[i]==key ? "Found\n" : "Not Found\n");
}
