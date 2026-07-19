#include<stdio.h>
int c[20][20],v[20];
int main(){
    int n,i,j,x,y,min,cost=0,e=0;
    printf("Enter vertices: "); scanf("%d",&n);
    printf("Enter cost matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&c[i][j]);
    v[0]=1;
    printf("MST Edges:\n");
    while(e<n-1){
        min=999;
        for(i=0;i<n;i++)
            if(v[i])
                for(j=0;j<n;j++)
                    if(!v[j]&&c[i][j]<min)
                        min=c[i][j],x=i,y=j;
        printf("%d-%d\n",x,y);
        v[y]=1;
        c[x][y]=c[y][x]=999;
        cost+=min;
        e++;
    }
    printf("Minimum cost=%d",cost);
}