#include<stdio.h>
#include<stdlib.h>

int mod(int x){
    return (x >= 0 ? x : -x);
}


int min = 100000;

void min_energy(int h[],int i,int n,int curr){

    if(i > n) return ;

    if(i+1 == n - 1 || i+2 == n-1){
        if(curr < min) min = curr;
        return; 
    }

    int x = h[i+1] - h[i];
    curr += mod(x);
    min_energy(h,i+1,n,curr);

    curr -= mod(x);

    x = h[i+2] - h[i];
    curr += mod(x);
    min_energy(h,i+2,n,curr);

    return;

}


int main()
{   int n,*h;
    printf("Enter the number of stairs:");
    scanf("%d",&n);

    h = (int *) malloc (n * sizeof(int));

    
    printf("Enter the height array:");
    for(int i = 0; i < n ; i++)
    scanf("%d",&h[i]);

    min_energy(h,0,n,0);
    printf("Ans = %d",min); 

    return 0;
}