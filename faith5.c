int check(char s[],int l,int u,int n){
    if(n==1){
        if(s[l]==s[u]){
            return 1;
        }
        else return 0;
    }
    else if(s[l]==s[u]){
        return check(s,l+1,u-1,n-2);
    }
    else return 0;
}

#include<stdio.h>
int main(){
    char s[]="aaaad";
    if(check(s,0,4,5)==1){
        printf("Yes!!!!");
    }
    else printf("No!!!");
return 0;
}