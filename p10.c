#include<stdio.h>
void q(int a[],int l,int h){
    int i=l,j=h,p=a[l],t;
    if(l<h){
        while(i<j){
            while(a[i]<=p&&i<h)i++;
            while(a[j]>p)j--;
            if(i<j)t=a[i],a[i]=a[j],a[j]=t;
        }
        t=a[l],a[l]=a[j],a[j]=t;
        q(a,l,j-1); q(a,j+1,h);
    }
}
int main(){
    int a[100],n,i;
    printf("Enter number of elements: "); scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    q(a,0,n-1);
    printf("Sorted array:\n");
    for(i=0;i<n;i++) printf("%d ",a[i]);
}
