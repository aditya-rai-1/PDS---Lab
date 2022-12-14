#include<stdio.h>
int main(){
    char s[100];
    int i,t=0,j=1,gcd;
    printf("Enter the number:");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        printf("%c",s[i]);
        if(i>1){
            t=t*10+(s[i]-'0');
            j*=10;
        }
    }
    printf("%d %d",t,j);
    for(i=2;i<j;i++){
        if(t%i==0&&j%i==0) gcd=i;
    }
    printf("Fraction=%d/%d",t/gcd,j/gcd);
    


return 0;
}