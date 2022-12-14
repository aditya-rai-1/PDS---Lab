/* #include<stdio.h>
int main()
{
    int t,n,rem7,count7,count4;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        count7 = n/7;
        rem7 = n%7;
        if(rem7 % 4 != 0 && n%4!=0 ) printf("-1");
        else{
            if(n%4 != 0){    
                count4 = rem7/4;
                while(count7 + count4){
                    if(count4>0){
                        printf("4");
                        count4--;
                    }
                    else {
                        printf("7");
                        count7--;
                    }    
                }
            }
            else{
                count4 = n/4;
                while(count4--){
                    printf("4");
                }
            }

        }
        printf("\n");
    }
return 0;
} */

/*#include<stdio.h>
int main()
{
    int t,flag1,flag2,n,rem,count4,count7;
    scanf("%d",&t);
    while(t--){
        flag1=0;flag2=0;
        scanf("%d",&n);
        if((n%7)%4 != 0) flag1=1;
        if((n%4)%7 != 0 && n%4!=3) flag2=1;

        if(flag1==1 && flag2==1){
            printf("-1");
        }
        else{
            if(flag1==0){
                count7 = n/7;
                count4 = (n%7)/4;
                while(count7 + count4){
                    if(count4>0){
                        printf("4");
                        count4--;
                    }
                    else {
                        printf("7");
                        count7--;
                    }    
                }
                
            }
            else{
                count4 = n/4;
                count7 = (n%4)/7;
                while(count7 + count4){
                    if(count4>0){
                        printf("4");
                        count4--;
                    }
                    else {
                        printf("7");
                        count7--;
                    }    
                }
            }
        }

        printf("\n");
    }
return 0;
}*/

#include<stdio.h>
int main()
{
    int n,t,count4,count7;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        count7 = n/7;
        count4 = n/4;
        if( (n%4 + n%7)%4 == 0 || (n%4 + n%7)%7 == 0 ){
            count7 = n/7;
            count4 = (n%7)/4;
            if( n%4 ==3 ){
                count4--;
                count7++;
            }
            while(count7 + count4){
                    if(count4>0){
                        printf("4");
                        count4--;
                    }
                    else {
                        printf("7");
                        count7--;
                    }    
                }

            }
        else printf("-1");

        printf("\n");     

    }
return 0;
}
