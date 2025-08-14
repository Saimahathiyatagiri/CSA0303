#include <stdio.h>
#define N 5
void dfs(int a[N][N], int v, int *visited){
    int i; visited[v]=1; printf("%d ",v);
    for(i=0;i<N;i++)
        if(a[v][i] && !visited[i]) dfs(a,i,visited);
}
int main() {
    int a[N][N], visited[N]={0}, start, i, j;
    for(i=0; i<N; i++) for(j=0; j<N; j++) scanf("%d",&a[i][j]);
    scanf("%d",&start);
    dfs(a,start,visited);
}
