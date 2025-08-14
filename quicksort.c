#include <stdio.h>
void qs(int a[], int l, int r){
    if(l<r){
        int p=a[l],i=l,j=r,t;
        while(i<j){
            while(a[i]<=p && i<r) i++;
            while(a[j]>p) j--;
            if(i<j){t=a[i];a[i]=a[j];a[j]=t;}
        }
        a[l]=a[j]; a[j]=p;
        qs(a,l,j-1); qs(a,j+1,r);
    }
}
int main(){
    int a[50],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    qs(a,0,n-1);
    for(i=0;i<n;i++) printf("%d ",a[i]);
}
