#include<stdio.h>
void transpose(int a[][100],int m,int n);
int main(){
    int m,n,a[100][100];
    printf("Enter m:");
    scanf("%d",&m);
    printf("Enter n:");
    scanf("%d",&n);
    if(m!=n){
         printf("Transpose does not exists.");
         return 0;
    }
    printf("Enter the elements:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);    
        }
    }
     transpose(a,m,n);
return 0;
}
void transpose(int a[][100],int m,int n){
    int temp;
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            temp=a[j][i];
            a[j][i]=a[i][j];
            a[i][j]=temp;           
        }
    }
    printf("Transpose:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
               
        }
        printf("\n");
    }

}