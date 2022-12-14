#include <stdio.h>
int main()
{
    int n, a, max1 = -1e9, max2 = -1e9;
    printf("Enter n:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a > max1)
        {
            max2 = max1;
            max1 = a;
        }
        else if (a > max2 && a < max1)
            max2 = a;
    }
    printf("Max1= %d\n", max1);
    printf("Max2=%d", max2);

    return 0;
}