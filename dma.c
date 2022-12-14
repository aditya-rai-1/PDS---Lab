#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char **p,s[20];
    int n;
    printf("Enter the number of strings:");
    scanf("%d",&n);
    p = (char **) malloc( n * sizeof(char *));
    for(int i = 0; i<n ;i++){
        printf("Enter the name:");
        scanf("%s",s);
        p[i] = (char *) malloc ((strlen(s) + 1) * sizeof(char));
        strcpy(p[i],s);    
    }

    for(int i=0;i<n;i++){
        printf("%s\n",p[i]);
    }


return 0;
}