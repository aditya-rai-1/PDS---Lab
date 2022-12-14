#include<stdio.h>
#include<string.h>

void sort(char s[]){
    for(int round = 1; round <= strlen(s); round++){
        for(int i = 0; i < strlen(s) - round ; i++){
            if(s[i] > s[i + 1]){
                char temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
            }
        }
    }
}

int main(){
    char s1[100],s2[100];
    printf("Enter the two strings:");
    scanf("%s %s",s1,s2);

    sort(s1);
    sort(s2);

    if(strcmp(s1,s2) == 0){
        printf("Yes !! it is an anagram.\n");
    }

    else printf("No!!\n");

    return 0;
}