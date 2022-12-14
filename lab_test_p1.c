#include<stdio.h>
int main(){
    char s[100];
    int flag1=0,flag2=0;
    printf("Enter the string:");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if(!(s[i]>='0'&&s[i]<='9')) flag1=1;
        if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))) flag2=1;
    }
    if(flag1==0){
        printf("NUM");
        return 0;
    }
    else if(flag2==0){
        printf("ALPHA");
        return 0;
    }
    else printf("MIXED");
    

return 0;
}