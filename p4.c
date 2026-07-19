#include<stdio.h>

int main() {
    int c[10][10], d[10], v[10]={0}, n, s, i, j, u, min;
    printf("Enter vertices: ");
    scanf("%d", &n);
    printf("Enter cost matrix:\n");
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            scanf("%d", &c[i][j]);
    printf("Enter source: ");
    scanf("%d", &s);
    for(i=0; i<n; i++)
        d[i]=c[s][i];
    v[s]=1;
    d[s]=0;
    for(i=1; i<n; i++) {
        min=999;
        for(j=0; j<n; j++)
            if(!v[j] && d[j]<min) {
                min=d[j];
                u=j;
            }
        v[u]=1;
        for(j=0; j<n; j++)
            if(!v[j] && d[u]+c[u][j]<d[j])
                d[j]=d[u]+c[u][j];
    }
    printf("Shortest distances:\n");
    for(i=0; i<n; i++)
        printf("%d=%d\n", i, d[i]);
}