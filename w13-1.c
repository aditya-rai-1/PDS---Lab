
/* Name - Aditya Rai
    Roll No - 21AG30002 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x, y;
} point;

typedef struct node
{
    point cor;
    struct node *next;
} node;

int check(point a, point b, point c)
{
    int ans;
    ans = ((c.x - b.x) * (b.y - a.y)) - ((b.x - a.x) * (c.y - b.y));
    if (ans > 0)
        return 1;
    else
        return 0;
}

node *insert(node *head, point a)
{
    node *p;
    p = (node *)malloc(sizeof(node));
    p->cor = a;
    p->next = head;

    return p;
}

int main()
{
    char **p;
    int r, c, t, seed;
    point data[100];

    printf("Enter no. of rows, no. of columns and expected percentage of 1's :");
    scanf("%d %d %d", &r, &c, &t);

    p = (char **)malloc(r * sizeof(char *));

    for (int i = 0; i < r; i++)
    {
        p[i] = (char *)malloc(c * sizeof(char));
    }

    printf("Enter seed :");
    scanf("%d", &seed);

    srand(seed);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int n = rand() % 101;
            if (n <= t)
                p[i][j] = 1;
            else
                p[i][j] = 0;
        }
    }
    p[0][0] = 1;
    p[0][c - 1] = 1;

    for (int i = r - 1; i >= 0; i--)
    {
        for (int j = 0; j < c; j++)
        {
            if (p[i][j] == 0)
                printf("- ");
            else
                printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    printf("\nList of points:\n");

    printf("(0, 0) ");
    int n = 1;
    data[0].x = 0;
    data[0].y = 0;
    for (int i = 0; i < c; i++)
    {
        int max = -1, flag = 0;
        for (int j = 0; j < r; j++)
        {
            if ((j == 0 && i == 0) || (j == 0 && i == c - 1))
                continue;

            if (p[j][i] == 1)
            {
                int a;
                a = j;
                if (a > max)
                    max = a;
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("(%d,%d) ", i, max);
            data[n].x = i;
            data[n].y = max;
            n++;
        }
    }
    printf("(%d, 0)", c - 1);
    data[n].x = c - 1;
    data[n].y = 0;
    n++; // SIZE of top points array.

    // LINKED LIST PART >>>>

    node *head = NULL, *Q;
    head = insert(head, data[0]);
    head = insert(head, data[1]);
    

    node *x,*y;
    

    for(int i = 2; i < n ; i++){
        x = head;
        y = head->next;
        if(check(x->cor,y->cor,data[i])){
            head = insert(head,data[i]);
        }

    }
    if((head->cor).x != data[n-1].x && (head->cor).y != data[n-1].y){
        head = insert(head,data[n-1]);
    }
    
    Q = head;
    printf("\n\nVertices :\n");
    while (Q != NULL)
    {
        printf("(%d, %d) ", (Q->cor).x, (Q->cor).y);
        Q = Q->next;
    }

    Q = head;

    while (Q != NULL)
    {
        p[Q->cor.y][Q->cor.x] = 2;
        Q = Q->next;
    }

    printf("\n\nOutput array:\n");
    for (int i = r - 1; i >= 0; i--)
    {
        for (int j = 0; j < c; j++)
        {
            if (p[i][j] == 0)
                printf("- ");
            else
                printf("%d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}


