#include <stdio.h>
int s[50], top=-1, n=0;
int main() {
    int ch, x;
    do {
        printf("1.Push 2.Pop 3.Peek 4.Exit\n");
        scanf("%d",&ch);
        if(ch==1) { scanf("%d",&x); s[++top]=x; }
        else if(ch==2 && top>=0) top--;
        else if(ch==3 && top>=0) printf("%d\n", s[top]);
    } while(ch!=4);
}
