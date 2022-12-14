/*#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int count = 0;

void permute( int a[],int n,int index){
    if(index > n) return;

    if( index == n){

        a[0] == 0? printf(" ") : printf("%d",a[0]);

        for(int j = 1; j < n;j++){
            printf("%d",a[j]);
        }
        printf(" ");
        count++;
        if( count%10 == 0) printf("\n");
        return;
    }

    for(int i = index; i<n;i++){
        swap(&a[index],&a[i]);
        permute(a,n,index + 1);
        swap(&a[index],&a[i]);
        
    }
    return;

}

int main()
{
    int a[10],n;
    printf("Enter the number of digits:");
    scanf("%d",&n);
    printf("Enter %d distinct digits:",n);
    for( int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    permute(a,n,0);
    printf("\nCount = %d",count);

return 0;
}*/

#include<stdio.h>
#include<string.h>


void push(char s[],char a){
    int n = strlen(s);
    s[n] = a;
    s[n+1] = '\0';
}

void pop(char s[]){
    int n = strlen(s);
    s[n-1] = '\0';
}
/*void subseq(int a[],int n,char s[],int index){
    if(index == n){
        printf("%s\n",s);
        return;
    }
    push(s,a[index] + '0');
    subseq(a,n,s,index +1);
    pop(s);
    subseq(a,n,s,index +1);

    return;
}

int main()
{
    int a[10],n;
    char s[10] = "";
    printf("Enter the number of digits:");
    scanf("%d",&n);
    printf("Enter %d distinct digits:",n);
    for( int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    subseq(a,n,s,0);

    return 0;
}*/

//Generating permutations with different method
/*int remover(char s[],char c){
    int i;
    for( i =0;i< strlen(s);i++){
        if(s[i] == c) break;
    }
    for(int j = i;j < strlen(s);j++){
        s[j] = s[j+1];
    }
    return i;
}
void adder(char s[],char c,int n){
    for(int j = strlen(s);j >= n;j--){
        s[j+1] = s[j];
    }
    s[n] = c;
}

void permute(char a[],char s[],int index){
    if(strlen(a) == 0){
        printf("%s\n",s);
        return;
    }

    for(int i = 0; i < strlen(a) ; i++){
        push(s,a[i]);
        int t = remover(a,a[i]);
        permute(a,s,index+1);
        adder(a,a[i],t);
    }
    return;
}

int main()
{
    char a[10] , s[10] = "";
    printf("Enter the number:");
    scanf("%s",a);
    permute(a,s,0);

}*/

//RAT IN A MAZE
int count = 1;
void paths(int a[][20],int b[][20],char s[],int n,int i,int j){
    if(i>= n || j>= n || i < 0 || j < 0) return ;
    if(a[i][j] == 1) return;
    if(b[i][j] == 1) return;
    if(i == n-1 && j == n-1){
        printf("%d. %s\n",count,s);
        count++;
        for(int p = 0;p<n;p++){
            for(int q = 0; q < n; q++){
                b[p][q] = 0;
            }
        }
        return;
    }
    
    push(s,'D');
    b[i][j] = 1;
    paths(a,b,s,n,i+1,j);
    pop(s);
    push(s,'L');
    b[i][j] = 1;
    paths(a,b,s,n,i,j-1);
    pop(s);
    push(s,'R');
    b[i][j] = 1;
    paths(a,b,s,n,i,j+1);
    pop(s);
    push(s,'U');
    b[i][j] = 1;
    paths(a,b,s,n,i-1,j);
    pop(s);
    
    return;
}

int main()
{   int n,a[20][20] = {0},b[20][20] = {0};
    char s[100] = "";
    printf("Enter n:");
    scanf("%d",&n);
    //printf("Enter the array elements:\n");
    /*for(int i =0;i<n;i++){
        for(int j = 0; j<n;j++){
            scanf("%d",&a[i][j]);
            //b[i][j] = a[i][j];
        }
    }*/
    paths(a,b,s,n,0,0);

    return 0;
}

