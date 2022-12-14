#include<stdio.h>
int main(){
    int n,t,size_of_nums=0,nums[10];
    printf("Enter the number:");
    scanf("%d",&n);
    t=n;
    while(t!=0){
        nums[size_of_nums]=t%10;
        size_of_nums++;
        t/=10;
    }
    for(int i=0;i<size_of_nums;i++){
        if(!(nums[i]==nums[size_of_nums-1-i])){
            printf("%d is not a palindrome number",n);
            return 0;
            
        }
    }
    
    printf("%d is a palindrome number",n); 
    
return 0;
}