#include<stdio.h>
int main(){
    int a[100],n,curr_count=0,max_count=0,i,j,index;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        curr_count=0;
        for(j=i;j<n;j++){
            if(a[j]==a[i]) curr_count++;
        }
        if(curr_count>max_count){
            max_count=curr_count;
            index=i;
        }
    }
    printf("Most occuring element=%d",a[index]);
return 0;
}