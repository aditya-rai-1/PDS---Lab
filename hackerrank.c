/* #include<stdio.h>


int main()
{   const int N=100000;
    const int MIN=-10000000;
    int t;
    scanf("%d",&t);
    while(t>0){
        int n,a[N],max=MIN,gcd,flag=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]>max) max=a[i];
        }

        for(int i=1;i<=max;i++){
            flag=0;
            for(int j=0;j<n;j++){
                if(a[j]%i!=0) flag=1;
            }
            if(flag==0) gcd=i;

        }
        printf("%d\n",gcd); 
        
        
        t--;
    }
return 0;
} */
#include<stdio.h>
int main()
{   const int N=100000;
    const int MIN=-1000000;
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a[N],i,j;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        i=0;j=0;
        int sum=0,max_sum=MIN;

        while(j<n){
            sum+=a[j];
            if(sum>max_sum) max_sum=sum;
            if(sum<0) sum=0;
            j++;
        }

        printf("%d\n",max_sum);

    }
return 0;
}