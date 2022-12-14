#include<stdio.h>


int fib(int n,int dp[]){
    if(n <= 1) return n;

    if(dp[n] != -1 ) return dp[n];
    else return (dp[n] = fib(n-1,dp) + fib(n-2,dp));
}





//1. BASE CONDITION
//2. CHECK KRO KI KYA YE VALUE MERE PAAS HAI KYA ??
//3. RECURSION KO CALL KRO AGARA VALUE NHI HAI. 


/*
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    int dp[n + 1];
    for(int i = 0; i <= n;i++)
    dp[i] = -1;

    printf("%d",fib(n,dp));

    return 0;
}*/

int count_ways(int n,int i){

    if(i > n) return 0;
    if( i == n ) return 1;

    int a = count_ways(n,i+1);
    int b = count_ways(n,i+2);

    return (a+b);
}





int count_paths(int n,int i,int dp[]){

    if( i > n) return 0;
    if(i == n) return 1;

    if(dp[i] != -1) return dp[i];
    
    else return (dp[i] = count_paths(n,i+1,dp) + count_paths(n,i+2,dp));

}










int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    int dp[n+1];
    for(int i = 0; i <= n ; i++)
    dp[i] = -1;

    
    printf("%d   %d ", count_ways(n,0),count_paths(n,0,dp));




    return 0;
}