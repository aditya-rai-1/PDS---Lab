#include<stdio.h>
int sliding(int a[],int n,int k);
int main(){
    int n,a[100],curr_sum,max_sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        curr_sum=0;
        scanf("%d",&a[i]);
         /*if(i>1){
            curr_sum=a[i]+a[i-1]+a[i-2];
            if(curr_sum>max_sum){
                max_sum=curr_sum;
            }
        } */
    }

     
    printf("Max_sum_subarray=%d",sliding(a,n,3));
return 0;
} 

int sliding(int a[],int n,int k){
    int i=0,j=0,sum=0,max=-1000;
    while(j<n){
        sum+=a[j];
        if(j-i+1<k) j++;
        else if(j-i+1==k){
            if(sum>max) max=sum;
            sum-=a[i];
            i++;
            j++;
        }

    }
    
    return max;
}


