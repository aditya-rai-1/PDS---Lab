int gram(int n,int k){
    if(n==1&&(k==1||k==2)){
        return 0;
    }
    else{
        int t=gram(n-1,k/2+1);
        if(t==0&&k%2==0){
            return 0;
        }
        else if(t==0&&k%2!=0){
            return 1;
        }
        else if(t==1&&k%2==0){
            return 0;
        }
        else{
            return 1;
        }
        
    }
}
#include<stdio.h>
int main(){
    printf("%d",gram(3,1));   
return 0;
}