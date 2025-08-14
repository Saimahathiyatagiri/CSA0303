#include <stdio.h>
#define V 5
#define INF 9999

int main() {
    int G[V][V] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };
    int selected[V] = {0}, edges=0, i, j, u=0, v=0, min, total=0;
    selected[0]=1;
    while(edges<V-1) {
        min=INF;
        for(i=0;i<V;i++) if(selected[i])
            for(j=0;j<V;j++)
                if(!selected[j] && G[i][j] && G[i][j]<min) {
                    min=G[i][j]; u=i; v=j;
                }
        printf("Edge %d-%d, Weight %d\n", u, v, G[u][v]);
        total+=G[u][v]; selected[v]=1; edges++;
    }
    printf("Total MST Cost: %d\n", total);
    return 0;
}
