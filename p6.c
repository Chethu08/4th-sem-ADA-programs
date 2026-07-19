#include<stdio.h>
int main(){
    int w[10],p[10],k[10][10],n,m,i,j;
    printf("Enter objects: "); scanf("%d",&n);
    printf("Enter weights:\n");
    for(i=1;i<=n;i++) scanf("%d",&w[i]);
    printf("Enter profits:\n");
    for(i=1;i<=n;i++) scanf("%d",&p[i]);
    printf("Enter capacity: "); scanf("%d",&m);
    for(i=0;i<=n;i++)
        for(j=0;j<=m;j++)
            if(!i||!j) k[i][j]=0;
            else if(w[i]<=j)
                k[i][j]=(p[i]+k[i-1][j-w[i]]>k[i-1][j])?p[i]+k[i-1][j-w[i]]:k[i-1][j];
            else k[i][j]=k[i-1][j];
    printf("Optimal solution=%d",k[n][m]);
}
