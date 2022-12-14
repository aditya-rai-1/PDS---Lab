/*#include<stdio.h>
#include<string.h>

/*
#define MIN -100000
int max = MIN;
// USING GLOBAL VARIABLE  and MAX = -100000
int max_(int a[],int n){
    
    if(n == 0){
        return max;
    }
    if(a[n-1] > max){
        max = a[n-1];    
    }
    return max_(a,n-1);
}


//WITHOUT USING THAT..

int max_h(int a[],int n,int k){
    if(n == 1) return k;

    if(a[n-1] > k) k = a[n-1];

    return max_h(a,n-1,k);
}


int main()
{
    int a[] = {11 , 18 , 54 , 16 ,92 ,2 , 5 };
    int k = a[0];
    //INITIALISING K WITH A[0] AS YOU HAVE SUGGESTED.

    printf("With = %d\n",max_(a,7));
    printf("Without = %d\n",max_h(a,7,k));

    return 0;
}*/

//PALINDROME CHECK ANOTHER WAY...

int check(char s[],int l,int r){
    if( l > r ) return 1;

    if( s[l] == s[r]) return check(s,l+1,r-1);
    return 0;
}


int main()
{

    char s[100];
    printf("Enter the string:");
    scanf("%s",s);

    if(check(s,0,strlen(s) - 1) == 1) printf("Yes\n");
    else printf("No\n");

    return 0;
}
/*
#include <stdio.h>
#include <string.h>
int flag = 1;
void p(char s[], int i)
{
    int m = strlen(s) - (i + 1);

    if (s[i] == s[m])
    {

        ++flag;

        if (flag == strlen(s))
        {
            printf("yes");
            return;
        }
        p(s, i + 1);
    }

    else
    {
        printf("no");
        return;
    }
}

int main()
{
    char s[50];

    printf("Enter a string: ");
    scanf("%s", s);

    p(s, 0);

    return 0;
}*/