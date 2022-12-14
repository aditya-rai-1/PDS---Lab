#include<stdio.h>
int check(int a[][10],int n);
int main(){
    int n,a[10][10];
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);    
        }
    }
    printf("%d",check(a,n));

return 0;
}
/* int check(int a[][10],int n){
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i][j]!=0) flag=1;
        }
    }
    if(flag==0) return 1;
    else return 0;   
} */

/* int check(int a[][10],int n){
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i][j]!=0) flag=1;
        }
    }
    if(flag==0) return 1;
    else return 0;   
} */

int check(int a[][10],int n){
    int flag1=0,flag2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(i==j&&a[i][j]!=1) flag2=1;
                if(i!=j&&a[i][j]!=0) flag1=1;
        }
    }
    if(flag1==0&&flag2==0) return 1;
    else return 0;   
}