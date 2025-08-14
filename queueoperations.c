#include <stdio.h>
int q[50], f=0, r=0, n;
int main() {
    int ch, x;
    scanf("%d",&n);
    do {
        printf("1.Enq 2.Deq 3.Dis 4.Exit\n");
        scanf("%d",&ch);
        if(ch==1 && r<n) {  scanf("%d",&x); q[r++]=x; }
        else if(ch==2 && f<r) { f++;}
        else if(ch==3) for(int i=f;i<r;i++) printf("%d ",q[i]);
        printf("\n");
    } while(ch!=4);
}
