#include<stdio.h>
void print_the_array(int a[],int size);
void permute(int a[],int l,int r);
int count=0;
int main(){
    int n,a[10],i;
    printf("Enter the number of digits:");
    scanf("%d",&n);
    printf("Enter %d distinct digits:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    permute(a,0,n-1);
    printf("\nCount=%d",count); 
return 0;
}
 void print_the_array(int a[],int size){
     if(a[0]==0) printf(" ");
     else printf("%d",a[0]);
     for(int i=1;i<size;i++){
     printf("%d",a[i]);
     }
     printf(" ");
     count++;
     if(count%10==0)
     printf("\n");
 }
 
 void permute(int a[],int l,int r){
     int i,temp;
     if(l==r){
         print_the_array(a,r+1);
     }
     else{
         for(i=l;i<=r;i++){
             temp=a[l];
             a[l]=a[i];
             a[i]=temp;
             permute(a,l+1,r);
             temp=a[l];
             a[l]=a[i];
             a[i]=temp;    //backtrack
         }
     }

 }   