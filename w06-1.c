//Aditya Rai
//21AG30002
#include<stdio.h>
#include<stdlib.h>
int main(){
int n,seed,a[800];
printf("Enter the number of points:");
scanf("%d",&n);
printf("Enter seed:");
scanf("%d",&seed);
srand(seed);
for(int i=0;i<=2*n-2;i+=2){
    a[i]=rand()%21;
}
srand(seed+1);
for(int i=1;i<=2*n-1;i+=2){
    a[i]=rand()%21;
}
//for(int i=0;i<=2*n-1;i++){
  //  printf("%2d ",a[i]);
//}
printf("Unique points generated:\n");
for(int i=0;i<=2*n-2;i+=2){
    printf("%2d %2d\n",a[i],a[i+1]);
}







return 0;
}