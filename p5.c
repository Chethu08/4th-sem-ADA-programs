#include<stdio.h>
int main(){
    int a[10][10],in[10]={0},n,i,j,c=0;
    printf("Enter vertices: "); scanf("%d",&n);
    printf("Enter adjacency matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]),in[j]+=a[i][j];
    printf("Topological order:\n");
    while(c<n)
        for(i=0;i<n;i++)
            if(in[i]==0){
                printf("%d ",i);
                in[i]=-1; c++;
                for(j=0;j<n;j++)if(a[i][j])in[j]--;
            }
}
