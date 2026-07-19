#include<stdio.h>
int a[20],x[20],n,s,c;
void f(int k,int t){
    if(t==s){
        printf("Subset %d\n",++c);
        for(int i=0;i<n;i++)if(x[i])printf("%d\n",a[i]);
        return;
    }
    for(int i=k;i<n;i++)
        if(t+a[i]<=s)
            x[i]=1,f(i+1,t+a[i]),x[i]=0;
}
int main(){
    printf("Enter n: "); scanf("%d",&n);
    printf("Enter elements in ascending order:\n");
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter sum: "); scanf("%d",&s);
    f(0,0);
}
