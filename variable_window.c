//SUBARRAY OF SUM K
//1.BRUTE FORCE APPROACH.
/* #include<stdio.h>
int main(){
    int n,a[100],sum,sum1=0,i,j;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter the required sum:");
    scanf("%d",&sum);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum1=0;
        for(j=i;j<n;j++){
            sum1+=a[j];
            if(sum1==sum){
                printf("Lower index=%d,Upper Index= %d",i,j);
                printf("\n");
                
                for(int k=i;k<=j;k++){
                    printf("%d ",a[k]);
                }
                printf("\n");
                break;
            }
            

        }
    }

return 0;
} */
 
#include<stdio.h>
int main(){
    int n,a[100],req_sum,curr_sum=0,i=0,j=0,count=0,size[100];
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter the required sum:");
    scanf("%d",&req_sum);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    i=0;
    while(j<n){
        curr_sum+=a[j];
        if(curr_sum>req_sum){
            i++;
            j=i;
            curr_sum=0;
        }
        else if(curr_sum<req_sum) j++;
        else if(curr_sum==req_sum){
            size[count]=j-i+1;
            count++;
            i++;
            j=i;
            curr_sum=0;
        }
    }
    for(i=0;i<count;i++){
        printf("%d ",size[i]);
    }

    
return 0;
}
