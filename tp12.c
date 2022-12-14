#include<stdio.h>
#include<stdlib.h>

struct node
{
    int x;
    int y;
    struct node *next;
};

struct node *nodeup(struct node *a, int *B, char **A)
{
    struct node *r;
    r = (struct node *) malloc (sizeof(struct node));
    r->y = *(B++);
    r->x = *(B++);
    if(((a->x)-(a->next->x))*((r->y)-(a->y)) < (((r->x)-(a->x))*((a->y)-(a->next->y))))
    {
        r->next=a;
        return r;
    }
    else
    {
        A[a->y][a->x]='1';
        a=a->next;
        return a;
    }
}

void display(struct node *c)
{
    struct node *q = c;
    while(q!= NULL)
    {
        printf("(%d,%d) ",q->x, q->y);
        q = q->next;
    }
}

int main()
{
    int r,c,t,i,j,n;
    int *B, *p;
    char **A;
    struct node *head0, *head1;
    printf("Enter no. of rows, no. of columns and expected percentage of 1's: ");
    scanf("%d%d%d",&r,&c,&t);
    printf("Enter seed: ");
    scanf("%d",&n);
    A = (char **)malloc(r*sizeof(char *));
    for(i=0; i<r; ++i)
        A[i]= (char *)malloc(c*sizeof(char));
    B = (int *)malloc(2*(c+2)*sizeof(int));
    p = B;
    *(p++) = 0;
    *(p++) = 0;
    srand(n);
    for(i=0; i<r; ++i)
    {
        for(j=0; j<c; ++j)
        {
            if((rand()%100)+1 <= t)
                A[i][j]='1';
            else A[i][j]='-';
        }
    }
    A[0][0]=A[0][c-1]='1';
    printf("\n\nInput array:\n");
    for(i=0; i<r; ++i)
    {
        for(j=0; j<c; ++j)
            printf("%c ",A[r-1-i][j]);
        printf("\n");
    }
    printf("\n");
    printf("List of points: \n(0,0) ");
    for(j=0; j<c; ++j)
    {
        for(i=r-1; i>=0; --i)
        {
            if(A[i][j]=='1')
            {
                if((i==0 && j==0)||(i==0 && j==c-1))
                    continue;
                else
                {
                    printf("(%d,%d) ",j,i);
                    *p++ = i;
                    *p++ = j;
                    A[i][j]='2';
                }
                break;
            }
        }

    }
    *(p++) = 0;
    *(p++) = c-1;
    printf("(%d,0)",c-1);
    head0->y = *(B++);
    head0->x = *(B++);
    head0->next = NULL;
    head1->y = *(B++);
    head1->x = *(B++);
    head1->next = head0;
    while(!(head1->x == c-1 && head1->y == 0))
    {
        head1 = nodeup(head1,B,A);
    }
    printf("Vertices:\n");
    display(head1);
    printf("\n\nOutput array:");
    for(i=0; i<r; ++i)
    {
        for(j=0; j<c; ++j)
            printf("%c ",A[r-1-i][j]);
        printf("\n");
    }
    return 0;
}