#include<stdio.h>
#include<stdlib.h>
int x[20],n,c;
int p(int k,int i){
    for(int j=1;j<k;j++)
        if(x[j]==i||abs(x[j]-i)==abs(j-k))return 0;
    return 1;
}
void q(int k){
    for(int i=1;i<=n;i++)
        if(p(k,i)){
            if(x[k]=i,k==n){           
                printf("\nS%d\n",++c);
                for(int r=1;r<=n;r++,puts(""))
                    for(int j=1;j<=n;j++)
                        printf(x[r]==j?"Q ":"X ");
            }
            else q(k+1);
        }
}
int main(){
    printf("Enter number of queens: ");
    scanf("%d",&n);
    q(1);
}
