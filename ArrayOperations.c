#include <stdio.h>
int main() {
    int a[100], n=0, ch, pos, val, i;
    do {
        printf("1.Insert 2.Delete 3.Display 4.Exit\nEnter choice: ");
        scanf("%d",&ch);
        if(ch==1) {
            printf("Pos & Val: "); scanf("%d%d",&pos,&val);
            for(i=n;i>pos;i--) a[i]=a[i-1];
            a[pos]=val; n++;
        } else if(ch==2) {
            printf("Pos: "); scanf("%d",&pos);
            for(i=pos;i<n-1;i++) a[i]=a[i+1];
            n--;
        } else if(ch==3) {
            for(i=0;i<n;i++) printf("%d ",a[i]);
            printf("\n");
        }
    } while(ch!=4);
}
