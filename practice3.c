#include <stdio.h>
int main()
{
    int n, k,i, a[10],b[10];
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter k:");
    scanf("%d", &k);
    printf("Enter array elements:");
    for ( i = 0; i < n; i++)
        scanf("%d", &a[i]);
    

    for (int  round = 1; round <= n - 1; round++)
    {
        for ( i = 0; i < n - round; i++)
        {
            if (a[i] < a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    b[0]=a[0];
    i=1;
    for(int j=1;j<n;j++){
        b[i]=a[j];
        if(b[i]==b[i-1]) continue;
        else i++;
        
    }
    for(int j=0;j<i;j++){
        printf("%d ",b[j]);
    }
    int size_of_b=i,count=0;
    for(int j=0;j<n;j++){
        if(a[j]==b[k-1])  count++;
    }
    printf("\n%d largest =",k);
    for(int j=0;j<count;j++){
        printf("%d ",b[k-1]);
    }
    
    

    return 0;
}