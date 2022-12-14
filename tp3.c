/*#include<stdio.h>
int a[2001][2001];
int main()
{
    int n,t;
    printf("Enter n:");
    scanf("%d",&n);
    t=n;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            a[i][j]=t;
            a[j][i]=t;
            a[2*n-2-i][j]=t;
            a[j][2*n-2-i]=t;
        }
        if(t>1) t--;
    }
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

return 0;
}*/
#include <stdio.h> int a[2001][2001]; int main() { int n,t; printf("Enter n:"); scanf("%d",&n); t=n; for(int i=0;i<2*n+1;i++){ for(int j=0;j<2*n+1;j++){ a[i][j]=t; a[j][i]=t; a[2*n-i][j]=t; a[j][2*n-i]=t; } t--; } for(int i=0;i<2*n+1;i++){ for(int j=0;j<2*n+1;j++){ printf("%d ",a[i][j]); } printf("\n"); } return 0; }