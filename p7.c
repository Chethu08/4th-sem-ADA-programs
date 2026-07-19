#include<stdio.h>
int main(){
    float p[10],w[10],r[10],c,m=0,t;
    int n,i,j;
    printf("Enter objects: "); scanf("%d",&n);
    printf("Enter profit and weight:\n");
    for(i=0;i<n;i++) scanf("%f%f",&p[i],&w[i]),r[i]=p[i]/w[i];
    printf("Enter capacity: "); scanf("%f",&c);
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(r[i]<r[j])
                t=r[i],r[i]=r[j],r[j]=t,
                t=p[i],p[i]=p[j],p[j]=t,
                t=w[i],w[i]=w[j],w[j]=t;
    for(i=0;i<n;i++)
        if(c>=w[i]) m+=p[i],c-=w[i];
        else{ m+=c*r[i]; break; }
    printf("Maximum profit=%.2f",m);
}
