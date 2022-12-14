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

int check(int a[][10],int n){
    int curr_sum=0,sum=0,flag1=0,flag2=0;
    for(int i=0;i<n;i++) sum+=a[0][i];
    for(int i=0;i<n;i++){
        curr_sum=0;
        for(int j=0;j<n;j++){
            curr_sum+=a[i][j];
        }
        if(curr_sum!=sum) flag1=1;
    }
    sum=0;
    for(int i=0;i<n;i++) sum+=a[i][0];
    for(int i=0;i<n;i++){
        curr_sum=0;
        for(int j=0;j<n;j++){
            curr_sum+=a[j][i];
        }
        if(curr_sum!=sum) flag2=1;
    }
    if(flag1==0&&flag2==0) return 1;
    else return 0;
}