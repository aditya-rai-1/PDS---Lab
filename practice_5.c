#include<stdio.h>
#include<math.h>
int ispresent(int a[],int n);
int main(){
    int a[10],i,max=-1e9,count=0;
    printf("Enter the number of elements:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]>max) max=a[i];
    }
    for(i=0;i<=(int)(sqrt(max));i++){
        if(ispresent(a,i*i)==1) count++;
    }
    printf("Number of perfect squares=%d",count);


return 0;
}
int ispresent(int a[],int n){
    for(int i=0;i<10;i++){
        if(a[i]==n) return 1;
    }
    return 0;

}