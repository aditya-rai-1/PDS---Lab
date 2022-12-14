#include<stdio.h>
int main(){
    int n,a[100],b[100];
    printf("Enter the number of students:");
    scanf("%d",&n);
    printf("Enter the marks:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=(5*a[i])/3.0+0.5;
    }
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }

return 0;
}