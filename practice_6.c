#include<stdio.h>
int main(){
    char s[100];
    int count=0;
    printf("Enter the string:");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        switch(s[i]){
            case 'a':count++;
            continue;
            case 'e':count++;
            continue;
            case 'i':count++;
            continue;
            case 'o':count++;
            continue;
            case 'u':count++;
            continue;
        }
    }
    printf("Number of vowels:%d",count);

return 0;
}