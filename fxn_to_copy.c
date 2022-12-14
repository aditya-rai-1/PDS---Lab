void copy(int a[],int b[],int n){
    
    if(n==1){
        b[n-1]=a[n-1];
        return;
    }
    else{
        b[n-1]=a[n-1];
        copy(a,b,n-1);
    }

}
#include<stdio.h>
int main(){
    int a[]={2,4,5,6,2,8,7};
    int b[10];
    copy(a,b,7);
    for(int i=0;i<7;i++){
        printf("%d ",b[i]);
    }
return 0;
}