#include<stdio.h>
int main(){
    int a[10][10],n,i,j,k;
    printf("Enter vertices: "); scanf("%d",&n);
    printf("Enter cost matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(k=0;k<n;k++)
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(a[i][k]+a[k][j]<a[i][j])
                    a[i][j]=a[i][k]+a[k][j];
    printf("Shortest path matrix:\n");
    for(i=0;i<n;i++,printf("\n"))
        for(j=0;j<n;j++)
            printf("%4d",a[i][j]);
}
