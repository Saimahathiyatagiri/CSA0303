#include <stdio.h>
#define MAX 30

int parent[MAX];
int find(int i){ while(parent[i])i=parent[i]; return i;}
int uni(int i,int j){ if(i!=j){ parent[j]=i; return 1;} return 0; }

int main() {
    int edges[10][3] = {{0,1,2},{1,2,3},{0,3,6},{1,3,8},{1,4,5},{2,4,7},{3,4,9}};
    int n=5,m=7,cost=0,e=0,i;
    for(i=0;i<n;i++) parent[i]=0;
    printf("Edge \tWeight\n");
    while(e<n-1){
        int min=9999,u,v,k;
        for(k=0;k<m;k++)
            if(edges[k][2]<min && edges[k][2]!=0){
                min=edges[k][2]; u=edges[k][0]; v=edges[k][1];
            }
        if(uni(find(u),find(v))){
            printf("%d-%d\t%d\n",u,v,min); cost+=min; e++;
        }
        for(k=0;k<m;k++) if(edges[k][0]==u && edges[k][1]==v) edges[k][2]=0;
    }
    printf("Total MST Cost: %d\n", cost);
    return 0;
}
