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
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }


    
return 0;
}
void multi_mat(int a[][10],int b[][10],int c[][10],int m,int n,int p){
    int sum=0,t=0,v=0;
    for(int i=0;i<m;i++){
        sum=0;
        for(int j=0;j<n;j++){
            sum+=a[i][j]*b[j][i];
        }
        c[t][v]=sum;
        v++;
        if(t%(m-1)==0) t++;
        if(v%(p-1)==0) v=0; 
    }
}