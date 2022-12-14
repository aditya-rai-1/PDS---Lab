#include<stdio.h>
int main(){
   int n,a[20],sum=0,i=0,j,max_sum;
   printf("Enter n:");
   scanf("%d",&n);
   printf("Enter elements:");
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    max_sum=a[0];
    for(i=0;i<n;i++){
        sum=0;
        for(j=i;j<n;j++){
            sum+=a[j];
            if(sum>max_sum){
                max_sum=sum;
            }

        }
    }
    printf("%d",max_sum);

   

    

return 0;
}