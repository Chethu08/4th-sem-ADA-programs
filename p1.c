#include<stdio.h>
int p[20],c[20][20];
int f(int x){ return p[x]?f(p[x]):x; }
int main(){
    int n,i,j,x,y,min,cost=0,e=0;
    printf("Enter vertices: "); scanf("%d",&n);
    printf("Enter cost matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&c[i][j]);
    printf("Edges in MST:\n");
    while(e<n-1){
        min=999;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(i!=j&&c[i][j]<min)
                    min=c[i][j],x=i,y=j;
        if(f(x)!=f(y))
           p[f(y)]=f(x),printf("%d-%d\n",x,y),cost+=min,e++;
        c[x][y]=c[y][x]=999;
    }
    printf("Minimum cost=%d",cost);
}
