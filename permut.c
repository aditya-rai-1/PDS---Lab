#include<stdio.h>
void insert(int a[],int i,int n,int key);
void permut(int a[],int n){
    int b[10];
    if(n==1){
        b[0]=a[0];
        return;
    }
    else {
        permut(a,n-1);
        for(int i=0;i<n;i++){
            insert(b,i,n-1,a[n-1]);

        }
        for(int i=0;i<n;i++){
            printf("%d",b[i]);
        }


    }
}
void insert(int a[],int i,int n,int key){
    if(i==0){

        for(int j=n-1;j>=0;j--){
            a[j+1]=a[j];
        }
        a[0]=key;
    }
    else if(i==n){
        a[n]=key;
    }
    else{
        for(int j=n-1;j>=i;j--){
            a[j+1]=a[j];
        }
        a[i]=key;
    }
}
int main()
{
    int a[]={2,3,5,8};
    permut(a,4);
}