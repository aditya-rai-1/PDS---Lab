#include<stdio.h>

void delete(int a[],int index,int n){
    for(int i = index ; i < n-1 ; i++ ){
        a[i] = a[i+1];
    }
    return;
}

void solve( int a[],int n,int k,int i){
    
    if( n == 1){
        printf("Winner is %d\n",a[0]);
        return;
    }

    delete(a,(i + k - 1)%n,n);
    
    //i = (i + k - 1)%n;
    solve(a,n-1,k,(i + k - 1)%n);

    return;

}

int main()
{
    int a[100],n,k;

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter k:");
    scanf("%d",&k);

    for(int i = 0; i < n; i++){
        a[i] = i+1;
    }

    solve(a,n,k,0);
    
    return 0;
}