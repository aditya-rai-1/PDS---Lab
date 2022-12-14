#include<stdio.h>
#include<string.h>



int main()
{   
    char s[100];
    int sum1 = 0,sum2 = 0,sum3 = 0,flag = 0;

    printf("Enter the string:");
    scanf("%s",s);

    for(int i = 0; i < strlen(s);i++){
        switch(s[i]){

            case '(': {
                    sum1 += 1;
                }

            break;
            case ')': {
                    sum1 -= 1;
                    if(sum1 < 0) flag = 1;
                }
            break;
            case '{': {
                    sum2 += 1;        
                }
            break;
            case '}': {
                    sum2 -= 1;
                    if(sum2 < 0) flag = 1;
                }
            break;
            case '[': {
                    sum3 += 1;
                }
            break;
            case ']': {
                    sum3 -= 1;
                    if(sum3 < 0) flag = 1;
                }
            break;
        }

    }

    if(flag == 0 && sum1 == 0 && sum2 == 0 && sum3 == 0){
        printf(":)   Yes!! it is balanced.\n");
    }

    else printf(":(  Unbalanced.\n");

return 0;
}