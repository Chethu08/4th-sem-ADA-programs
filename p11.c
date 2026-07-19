#include<stdio.h>
void s(int a[],int l,int h){
    int i=l,j=(l+h)/2+1,m=(l+h)/2,k=0,b[100];
    if(l>=h)return;
    s(a,l,m); s(a,m+1,h);
    while(i<=m&&j<=h)b[k++]=a[i]<a[j]?a[i++]:a[j++];
    while(i<=m)b[k++]=a[i++];
    while(j<=h)b[k++]=a[j++];
    for(i=l,k=0;i<=h;)a[i++]=b[k++];
}
int main(){
    int a[100],n,i;
    printf("Enter number ofelements: "); scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    s(a,0,n-1);
    printf("Sorted array:\n");
    for(i=0;i<n;i++) printf("%d ",a[i]);
}
