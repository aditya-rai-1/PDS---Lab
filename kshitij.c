#include<stdio.h>




int main()
{
    int count = 0;
    int a[] = {5,3,2 ,6,12, 1, 10, 7, 4, 8, 9};

    printf("%d",bubble_sort(a,11,count));







    return 0;
}













int bubble_sort(int a[],int n,int count){
    for(int round = 1; round <= n; round++){
        for(int i = 0;i < n - round; i++){
            if(a[i] > a[i+1]){
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                count++;
            }
        }
    }

    return count;
}