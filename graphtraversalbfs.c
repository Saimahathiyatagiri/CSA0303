#include <stdio.h>
#define N 5
int main() {
    int a[N][N], visited[N]={0}, q[N], f=0, r=0, i, j, start;
    for(i=0;i<N;i++) for(j=0;j<N;j++) scanf("%d",&a[i][j]);
    scanf("%d",&start);
    q[r++]=start; visited[start]=1;
    while(f<r){
        int u=q[f++];
        printf("%d ",u);
        for(j=0;j<N;j++)
            if(a[u][j]&&!visited[j]){q[r++]=j;visited[j]=1;}
    }
}
