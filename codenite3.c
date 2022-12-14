#include<stdio.h>
const int N = 1000000000;
    int a[10000000]={0};
int main()
{
    int i,n,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        a[n]++;
        for(i=0;i<N;i++){
            if(a[i]==0) break;
        }
        printf("%d\n",i);
    }
    

return 0;
}