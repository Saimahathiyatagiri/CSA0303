#include <stdio.h>
int main() {
    int a[50], n, key, low=0, high, mid, found=0, i;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter the element to find: \n");
    scanf("%d",&key);
    high = n-1;
    while(low <= high) {
        mid = (low+high)/2;
        if(a[mid]==key) { found=1; break; }
        else if(key < a[mid]) high=mid-1;
        else low=mid+1;
    }
    printf(found ? "Found\n" : "Not Found\n");
}
