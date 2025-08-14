#include <stdio.h>
#define INFINITY 9999
#define MAX 10

void Dijkstra(int Graph[MAX][MAX], int n, int start) {
    int cost[MAX][MAX], distance[MAX], pred[MAX], visited[MAX];
    int count, mindistance, nextnode, i, j;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            cost[i][j] = (Graph[i][j]==0) ? INFINITY : Graph[i][j];

    for(i=0; i<n; i++){
        distance[i]=cost[start][i];
        pred[i]=start;
        visited[i]=0;
    }
    distance[start]=0; visited[start]=1; count=1;

    while(count < n-1){
        mindistance=INFINITY;
        for(i=0; i<n; i++)
            if(distance[i]<mindistance && !visited[i]) {
                mindistance = distance[i]; nextnode = i;
            }
        visited[nextnode]=1;
        for(i=0; i<n; i++)
            if(!visited[i] && mindistance+cost[nextnode][i]<distance[i]){
                distance[i]=mindistance+cost[nextnode][i];
                pred[i]=nextnode;
            }
        count++;
    }
    for(i=0; i<n; i++) if(i!=start)
        printf("Distance to %d: %d\n", i, distance[i]);
}

int main() {
    int Graph[MAX][MAX] = {
        {0, 2, 0, 1, 0},
        {2, 0, 3, 2, 0},
        {0, 3, 0, 0, 1},
        {1, 2, 0, 0, 1},
        {0, 0, 1, 1, 0}
    }, n=5, start=0;
    Dijkstra(Graph, n, start);
    return 0;
}
