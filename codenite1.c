#include<stdio.h>
#include<string.h>
//SUCCESS
int main()
{
    int t,i=0,j=0,flag;
    char s[200000],a[]="codeclub";
    scanf("%d",&t);

    while(t--){
        flag=0;
        i=0;j=0;
        
        scanf("%s",s);
        int n=strlen(s);
        while(j<8 && i<n){
            if(s[i]==a[j]){
                j++;
            }

            if(j==7){
                flag=1;
                break;
            }    
        i++;
        }
        if(flag==1) printf("YES\n");
        else printf("NO\n");
    }
return 0;
}