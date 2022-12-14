int pal(char s[],int st,int e){
    if(e==1){
        if(s[st]==s[e]){
            return 1;
        }
        else return 0;
    }
    else {
        if(s[e]==s[st]){
            return pal(s,st+1,e-1);
        }
        else return 0;
    }
}
#include<stdio.h>
    int main(){
    char s[]="tamat";
    if(pal(s,0,5)==1){
        printf("Yes!!");
    }
    else printf("No!!");
return 0;
}