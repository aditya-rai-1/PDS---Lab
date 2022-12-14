#include<stdio.h>
void multi_mat(int a[][10],int b[][10],int c[][10],int m,int n,int p);
int main(){
    int m,n,p,a[10][10],b[10][10],c[10][10];
    printf("Enter m,n,p:");
    scanf("%d%d%d",&m,&n,&p);
    printf("Enter the elements of A:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of B:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("C:\n");
    multi_mat(a,b,c,m,n,p);
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            printf("%3d",c[i][j]);
        }
        printf("\n");
        
    }
return 0;
}
void multi_mat(int a[][10],int b[][10],int c[][10],int m,int n,int p){
    int sum;
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            sum=0;
            for(int k=0;k<n;k++){
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
}

