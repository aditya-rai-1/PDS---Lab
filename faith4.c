#include<stdio.h>

void print(int n){
    if(n==1){
        printf("%d ",n);    //IT WILL PRINT NUMBER FROM 1 TO N
        return;
    }
    print(n-1);
    printf("%d ",n);   
}
void pattern1(int n){
    if(n==0) return;
    print(n);
    printf("\n");         //IT WILL PRINT PATTERN FROM 1 2 3 4 ...N
                                                //1 2 3 4 .....N-1
    pattern1(n-1);   
}
void pattern2(int n){
    if(n==1) return;
    else{
        pattern2(n-1);
        printf("\n");
        print(n);
    }
} 


int main()
{
    pattern1(5);
    
    pattern2(5);
}