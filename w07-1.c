/* #include <stdio.h>
int main()
{   int n,a[300],j=0;
    printf("1) Does the tour last for more than a week?\n");
    printf("2) Does the tour involve a lot of physical activities like hiking?\n");
    printf("3) Is the location of the tour a hill station?\n");
    printf("4) Is the cost per head more than 15000 INR?\n");
    printf("5) Are all the meals arranged by the tour manager?\n");
    printf("6) Are hotel rooms in the ground floor ensured for elderly people?\n");
    printf("7) Are the hotel rooms air-conditioned?\n");
    printf("8) Are wheelchairs arranged for physically challenged tourists?\n\n\n");


    printf("Enter the number :");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        printf("Enter the three preference of group %d:",i);
        scanf("%d%d%d",&a[j],&a[j+1],&a[j+2]);
        j+=3;
        i++;
    }
    








    return 0;
} */
#include <stdio.h>
int check(int a[], int j)
{
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0, c8 = 0, i;
    int c1n = 0, c2n = 0, c3n = 0, c4n = 0, c5n = 0, c6n = 0, c7n = 0, c8n = 0;
    for (i = 0; i <= j; i++)
    {
        if (a[i] == 1)
            c1++;
        if (a[i] == 2)
            c2++;
        if (a[i] == 3)
            c3++;
        if (a[i] == 4)
            c4++;
        if (a[i] == 5)
            c5++;
        if (a[i] == 6)
            c6++;
        if (a[i] == 7)
            c7++;
        if (a[i] == 8)
            c8++;

        if (a[i] == -1)
            c1n++;
        if (a[i] == -2)
            c2n++;
        if (a[i] == -3)
            c3n++;
        if (a[i] == -4)
            c4n++;
        if (a[i] == -5)
            c5n++;
        if (a[i] == -6)
            c6n++;
        if (a[i] == -7)
            c7n++;
        if (a[i] == -8)
            c8n++;
    }
    (c1 == 1 && c1n == 0) ? printf("1.Yes ") : printf("1.No");
    (c2 == 1 && c2n == 0) ? printf("2.Yes ") : printf("2.No");
    (c3 == 1 && c3n == 0) ? printf("3.Yes ") : printf("3.No");
    (c4 == 1 && c4n == 0) ? printf("4.Yes ") : printf("4.No");
    (c5 == 1 && c5n == 0) ? printf("5.Yes ") : printf("5.No");
    (c6 == 1 && c6n == 0) ? printf("6.Yes ") : printf("6.No");
    (c7 == 1 && c7n == 0) ? printf("7.Yes ") : printf("7.No");
    (c8 == 1 && c8n == 0) ? printf("8.Yes ") : printf("8.No");

    return 1;
}

int main()
{
    int m, i, j;
    int a[300];
    printf("Questions:\n\n\n1) Does the tour last for more than a week?\n2) Does the tour involve a lot of physical activities like hiking? ");
    printf("\n3) Is the location of the tour a hill station?\n4) Is the cost per head more than 15000 INR?\n5) Are all the meals arranged by the tour manager?\n");
    printf("6) Are hotel rooms in the ground floor ensured for elderly people?\n7) Are the hotel rooms air-conditioned?\n8) Are wheelchairs arranged for physically challenged tourists?\n");
    printf("\n Enter number of groups: ");
    scanf("%d", &m);

    for (i = 1, j = 0; i <= m; i++, j += 3)
    {
        printf("Enter the three preferences of group %d:", i);

        scanf("%d %d %d", &a[j], &a[j + 1], &a[j + 2]);
    }

    printf("\nAnswers:");
    check(a, j);
    return 0;
}