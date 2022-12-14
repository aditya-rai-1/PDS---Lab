//kya kr rhe hai

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*int main()
{
    char word[20],*w[20]; //Array of pointers
    //Agar 10 sentence store krna hai to 10 string ki jagah array of pointers bana lo aur phir dynamically allocate krdo 
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",word);
        w[i] = (char*)malloc(strlen(word)+1);
        strcpy(w[i],word);
    }
    for(int i=0;i<n;i++){
        printf("w[%d] = %s\n",i,w[i]);
    }
    printf("%c",*(w[0]+0));
    for(i=0;i<n;i++){
        free(w[i]);
    }
return 0;
}*/

/*int main()
{
    char word[20],**p;
    int n;
    printf("Enter the number of strings you want to store");
    scanf("%d",&n);
    p = (char **) malloc (n * sizeof(char *));
    for(int i=0;i<n;i++){
        scanf("%s",word);
        p[i] = (char *) malloc ((strlen(word) + 1) * sizeof(char));
        strcpy(p[i],word);
    }
    for(int i = 0;i < n; i++){
        printf("%s\n",p[i]);
    }

    free( p );
    return 0;
}*/

//DYNAMIC ALLOCATION OF 2D ARRAYS

/*int** allocator(int h,int w){
    int **p,n;
    **p = (int **) malloc ( h * sizeof(int *));
    for(int i=0;i<h;i++){
        /*printf("Enter the number of elements in a[%d]",i);
        scanf("%d",&n);*/
    /*    p[i] = (int *) malloc (n * sizeof(int));
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&p[i][j]);
        }
    }
    return p;

}*/

/*#include<stdio.h>
int main()
{
    int **p,i,j;

    p = (int**) malloc( 5 * sizeof(int *) );
    for(i=0;i<5;i++){
        p[i] = (int *) malloc( 5 * sizeof(int));
    }

    for(i=0;i<5;i++){
        printf("%u ",&p[i]);
    }
    printf("\n\n");

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%u ",&p[i][j]);
        }

        printf("\n");
    }
    p[1][1] = 0;
    printf("%d",*(*(p+1)+1));
return 0;
} */
/*#include<stdio.h>
#include<stdlib.h>
int exchange(int x);

int main()
{
    int n,*a,i;
    printf("Enter n:");
    scanf("%d",&n);
    a = (int*) malloc (n * sizeof(int));
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        a[i] = exchange(a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
return 0;
}

int exchange(int x){
    int i,n = x,*p;
    while(n != 0){
        i++;
        n/=10;
    }
    n = x;
    p = (int *)malloc( (i>3? i:4 ) * sizeof(int));

    i = (i>3)? i : 4;

    for( int j = i-1; j>=0 ;j--){
        p[j] = n%10;
        n/=10;
    }

    for( int j = 0;j<2;j++){
        int k = (j>0)? i-1 : i-2;
        int temp = p[j];
        p[j] = p[k];
        p[k] = temp;
    }
    n=0;
    for(int j = 0;j<i;j++){
        int k=1;
        n += (p[j] + n*k);
        k*=10;
    }

    return n;
}*/

#include <stdio.h>
#include <string.h>
typedef struct
{
    char first[50], sur[50];
} name;

int main()
{
    name data[10];
    printf("Write 10 names:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%s %s", data[i].first, data[i].sur);
    }

    /*for(int i=0;i<10;i++){
        printf("%s %s\n",data[i].first,data[i].sur);
    } */

    // SORTING A/C FIRST NAMES
    printf("Sorted according to first name:\n");
    int n = 10;
    for (int round = 1; round <= n; round++)
    {
        for (int i = 0; i < n - round; i++)
        {
            if (strcmp(data[i].first, data[i + 1].first) > 0)
            {
                name temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%s %s\n", data[i].first, data[i].sur);
    }
    printf("\n\n\n");

    // SORTING A/C  SURNAMES
    printf("Sorted according to surname:\n");
    
    for (int round = 1; round <= n; round++)
    {
        for (int i = 0; i < n - round; i++)
        {
            if (strcmp(data[i].sur, data[i + 1].sur) > 0)
            {
                name temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%s %s\n", data[i].first, data[i].sur);
    }

    return 0;
}