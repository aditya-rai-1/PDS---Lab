#include<stdio.h>
int main(){
    int n,a[100],i,j,req_sum,curr_sum,flag=0;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++) 
    scanf("%d",&a[i]);
    printf("Enter the required sum:");
    scanf("%d",&req_sum);
    for(i=0;i<n;i++){
        curr_sum=0;
        for(j=i;j<n;j++){
            curr_sum+=a[j];
            if(curr_sum==req_sum){
                printf("(");
                for(int k=i;k<=j;k++){
                    printf("%d",a[k]);
                    if(k!=j) printf(",");
                }
                printf(")");
                printf("\n");
                flag=1;
                break;
            }   
        }
    }
    if(flag==0){
        printf("No such subarray exists.");
    }
return 0;
}