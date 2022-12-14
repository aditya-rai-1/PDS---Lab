#include<stdio.h>
int main()
{
    int n,m,A[10][10]={0},i,j;
    printf("How many people and friendships?");
    scanf("%d %d",&n,&m);
    

    for(int k=1;k<=m;k++){
        printf("Enter the two guests participating in friendships %d:",k);
        scanf("%d %d",&i,&j);
        A[i-1][j-1]=1;
        A[j-1][i-1]=1;
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }*/
    


return 0;
}