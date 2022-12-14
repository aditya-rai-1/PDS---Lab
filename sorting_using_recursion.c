#include<stdio.h>
void sort(int a[],int n);
int main(){
    int a[]={2,1,5,8,4,6};
    sort(a,6);
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }

return 0;
}





void sort(int a[],int n){
    if(n==1) return;
    else{
        sort(a,n-1);
        if(a[n-1]>=a[n-2]){
            return;
        }
        else if(a[n-1]<=a[0]){
            int t=a[n-1];
            for(int i=n-2;i>=0;i--){
                a[i+1]=a[i];
            }
            a[0]=t;
            return;   
        }
        else{
            int i=0; 

            for( i=0;i<n-1;i++){
                if(a[i]<=a[n-1]&&a[i+1]>=a[n-1]){
                    break;
                }
            }
            int t=a[n-1];
            for(int j=n-2;j>=i+1;j--){
                a[j+1]=a[j];
            }
            a[i+1]=t;
            return;


            

            }
    }
}