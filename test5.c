#include<stdio.h>

typedef struct{
    char s[20];
}strings;

const int N=100000;
int main()
{   strings A[N];
    int n;
    printf("Enter the number of strings:");
    scanf("%d",&n);
    printf("Enter the strings:\n");
    for(int i=0;i<n;i++){
        scanf("%s",A[i].s);
    }
    for(int i=0;i<n;i++){
        printf("%s\n",A[i].s);
    }
    
return 0;
}
