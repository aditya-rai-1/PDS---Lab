int solve(int num1,int num2,int count){
    if(num1==0||num2==0) return count;
    else{
        if(num1>num2) return solve(num1-num2,num2,count+1);
        else return solve(num1,num2-num1,count+1);
    }
}
#include<stdio.h>
int main()
{
    printf("%d",solve(10,10,0));
return 0;
}