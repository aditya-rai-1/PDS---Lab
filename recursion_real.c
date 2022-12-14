/*#include<stdio.h>

int count=0;

void printc(){
    if(count == 4) return;
    else{
        printf("%d\n",count++);
        printc();
    }  
}

int main()
{
    printc();
    
return 0;
} */

/*#include<stdio.h>
void name( int n);
int main()
{
    int n;
    scanf("%d",&n);
    name(n);

return 0;
}

void name( int n){
    if(n==0) return;
    else{ 
        printf("Aditya Rai,%d\n",n);
        name(n-1);
    }    

}*/
/*#include<stdio.h>
void f(int i,int n){
    if(i>n) return;
    else{
        printf("%d\n",i);
        f(i+1,n);

    }
}
int main()
{   int n;
    scanf("%d",&n);
    f(1,n);
    
return 0;
}*/

//backtracking is this only

/*#include<stdio.h>

void p(int i,int n){
    if(i>n) return; 
    else{
        p(i+1,n);
        printf("%d ",i);
    }
}


int main()
{   int n;
    scanf("%d",&n);
    p(1,n);

    
return 0;
}*/
/*#include<stdio.h>

int fact(int n)
{
    if(n==1) return 1;
    else return (n*fact(n-1));
}

int main()
{   printf("%d",fact(6));
     
return 0;
}*/

/*void reverse(int a[],int l,int r)
{
    if(l>=r) return;

    else{
        int temp = a[l];   //swapping
        a[l]=a[r];
        a[r] = temp;
        reverse(a,l+1,r-1);

    }
}*/
//single variable
/*int a[10], n;

void reverse(int i)
{
    if (i >= n / 2)
        return;
    else
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
        reverse(i + 1);
    }
}*/

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

/*int check(char s[],int i)
{   
    if(i >= strlen(s)/2) return 1;
    else{
        if(s[i] == s[strlen(s) -1 -i]){
            return check(s,i+1);
        }
        else return 0;
    }
}
*/

//Main Subsequence problem

void push(char s[],char a){
    int n = strlen(s);
    s[n] = a;
    s[n+1] = '\0';
}

void pop(char s[]){
    int n = strlen(s);
    s[n-1] = '\0';
}

/*void print_(char a[],char s[],int i)
{   if(i == strlen(a)){
        printf("[%s]\n",s);
        return;
    }
    else{
        push(s,a[i]);
        print_(a,s,i+1);
        pop(s);
        print_(a,s,i+1);
    }
}



int main()
{
    char a[10],s[10] = "";
    printf("Enter the string:");  
    //printing subsequence only two options are available
    scanf("%s",a);
    print_(a,s,0);
    return 0;
}*/
//Avoid use of global variable
/*int count=0;
void print_(char a[],char s[],int sum,int n,int i)
{   if(count ==1 ) return;

    else if(i >= strlen(a)){
        if(sum == n)
    {   printf("%s\n",s);
        count++;
        
    }
         return;
    }
    else{
        push(s,a[i]);
        print_(a,s,sum + a[i] - '0',n,i+1);
        pop(s);
        print_(a,s,sum,n,i+1);
    }

}*/
/*int count(char a[],char s[],int sum,int n,int i)
{
    if(i == strlen(a)){
        if(sum == n) return 1;
        else return 0;
    }
    else{
        push(s,a[i]);
        int l = count(a,s,sum + a[i] - '0',n,i+1);
        pop(s);
        int r = count(a,s,sum,n,i+1);

        return (l+r);
    }
}*/


void print_(char a[],char s[],int sum,int n,int i);
int main()
{
    int n;
    char a[10],s[10] = "";
    printf("Enter the string:");
    scanf("%s",a);
    printf("Enter the required sum:");
    scanf("%d",&n);
    int sum=0,i=0;
    print_(a,s,sum,n,i);
    
    //printf("%d",count(a,s,sum,n,i));
}

/*void print_(char a[],char s[],int sum,int n,int i)
{
    if( i == strlen(a)){
        if(sum == n){
            printf("%s\n",s);    
        }
        return;
    }
    else{
        for(int j = 0;j < strlen(a);j++){
            push(s,a[j]);
            print_(a,s,sum + a[j] - '0',n,i+1);
            pop(s);
            print_(a,s,sum,n,i+1);
        }
    }
}*/

void print_(char a[],char s[],int sum,int n,int i)
{
    if(sum == n){
        printf("%s\n",s);
        i++;
        return;
    }
    else if(sum > n){
        i++;
        return;
    }
    else
    {
        push(s,a[i]);
        print_(a,s,sum + a[i] -'0',n,i);
        pop(s);
        print_(a,s,sum,n,i);
    }
}









