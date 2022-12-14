#include<stdio.h>


int Ispresent(int a[],int i,int key){
    int flag = 0;
    for(int j = 0; j<= i;j++){
        if(a[j] == key){
            flag = 1;
            break;
        }
    }
    return flag;
}



int main()
{   int a[100],n,count = 0;
    
    printf("Enter the elements:\n");
    scanf("%d",&a[0]);
    while(1){
        scanf("%d",&n);
        if(Ispresent(a,count,n) == 0){
            count++;
            a[count] = n;
        }
        if(count == 2) break;
    }
    printf("Answer = %d ,%d ,%d\n",a[0],a[1],a[2]);
    
return 0;
}