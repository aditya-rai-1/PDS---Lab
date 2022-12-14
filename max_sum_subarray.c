//KADEN' ALGORITHM
#include<stdio.h>
int main(){
    int n,a[100],i=0,j=0,curr_sum=0,max_sum=-1000;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    i=0;
    while(j<n){
        curr_sum+=a[j];
        if(curr_sum>max_sum) max_sum=curr_sum; 
        if(curr_sum<0){
            curr_sum=0;
            
        }
        j++;

    }
    printf("%d",max_sum);

    
return 0;
}