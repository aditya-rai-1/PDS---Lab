#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void push(char s[],char a){
    int n = strlen(s);
    s[n] = a;
    s[n+1] = '\0';
}

void pop(char s[]){
    int n = strlen(s);
    s[n-1] = '\0';
}
void pop_part(char s[],char a){
    int i=0;
    for(i = 0;i<strlen(s);i++){
        if(s[i] == a) break;
    }
    for(;i<strlen(s);i++){
        s[i] = s[i+1];
    }

}




/*void print_(char a[],char s[],int i,int r);
int main()
{
    char a[20],s[20]= "";
    printf("Enter the sequence:");
    scanf("%s",a);
    int i=0,r;
    printf("Enter the size of number:");
    scanf("%d",&r);
    print_(a,s,i,r);
    return 0;
}

void print_(char a[],char s[],int i,int r)
{
    if(strlen(s) == r){
        printf("%s\n",s);
        return;
    }
    if(i >= strlen(a)) return;

    push(s,a[i]);
    print_(a,s,i+1,r);
    pop(s);
    print_(a,s,i+1,r);

}*/
/*int counts(int i,int j,int n)
{
    if(i ==n && j == n) return 1;
    else if((i> n)||(j>n)) return 0;
    else{
        int l = counts(i+1,j,n);
        int r = counts(i,j+1,n);

        return (l+r);
    } 
}*/
/*int count(int i,int j,int n);

int main()
{
    int i=0,j=0,n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("%d",count(i,j,n));
    return 0;
}*/

/*int main()
{
    char m[10][10];
    int i=0,j=0,n;
    printf("Enter n:");
    scanf("%d",&n);
    /*for( i=0;i<n;i++){
        for(j = 0;j<n;j++){
            if()
        }//use whatever you wnat to use guys
        
    }
    i=0;j=0;
    printf("%d",count(m,i,j,n));
    
}

int count(char m[10][10],int i,int j,int n)
{   
    if(i>n-1 || j>n-1) return 0;
    
    else if(m[i][j] == '*') return 0;

    else if(i == n-1 && j == n-1) return 1;

    else{
        int l = count(m,i+1,j,n);
        int r = count(m,i,j+1,n);
        return (l+r);
    }
}*/

/*int count(int i,int j,int n)
{
    if(i>n|| j>n) return 0;
    if(i == n && j == n ) return 1;

    int a = count(i+1,j,n);
    int b = count(i,j+2,n);
    int c = count(i+1,j+1,n);

    return (a+b+c);
}*/
/* void paths(char s[],int i,int j,int n);
int main()
{
    int i=0,j=0,index=0,n;
    char s[500] = "00";
    printf("Enter n:");
    scanf("%d",&n);
    paths(s,i,j,n);
    return 0;
}
int count = 1;
void paths(char s[],int i,int j,int n)
{
    if(i>n || j>n ) return ;
    if(i==n && j==n) {
        printf("\n%d.",count++);
        for(int k=0;k < strlen(s);k+=2){
            printf("(%c,%c)",s[k],s[k+1]);
        }
        s="";
        printf("\n");
        return ;
    }
    push(s,i+1+'0');push(s,j+'0');
    paths(s,i+1,j,n);
    //pop(s);pop(s);
    push(s,i+'0');push(s,j+2+'0');
    paths(s,i,j+2,n);
    //pop(s);pop(s);
    push(s,i+1+'0');push(s,j+1+'0');
    paths(s,i+1,j+1,n);
}*/

//print all permutation 
/*int main()
{
    char s[25] = "",a[20];
    printf("Enter the string:");
    scanf("%s",a);
    int i=0;
    permute(s,i,a);
}
void permute(char s[],int i,char a[])
{
    if(strlen(a)==0){
        printf("%s\n",s);
    }
    else{
        for( int j =strlen(a)-1;j>=0;j--){
            char temp = a[j];
            push(s,a[j]);
            pop_part(a,a[j]);
            permute(s,i+1,a);
            push(a,temp);
            pop(s);
        }
    }
}*/

void bal(char s[],int i,int sum,int n)
{   if(strlen(s)>2*n) return;
    if(strlen(s) == 2*n){
        if(sum == 0){
            printf("%s\n",s);
        }
        return;
    }
    if(sum <0) return;
    
    push(s,'(');
    bal(s,i+1,sum+1,n);
    pop(s);
    push(s,')');
    bal(s,i+1,sum-1,n);
    

}
int main()
{
    char s[] = "";
    int n=2,i=0,sum=0;
    bal(s,i,sum,n);
    return 0;
}


