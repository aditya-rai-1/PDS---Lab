//ADITYA RAI
//21AG30002

#include <stdio.h>
void path(int X[1000],int Y[1000],int x,int y,int c,int n)
{
   if(x==n&&y==n)
   {
       int i;
       printf("\n");
       for(i=0;i<n;i++)
       {
           printf("(%d,%d),",X[i],Y[i]);
       }
       printf("(%d,%d)",n,n);
       return;
   }
    else if(x<n&&y<n)
    {
        X[c]=x;Y[c]=y;
        c=c+1;
        path(X,Y,x+1,y+1,c,n);
        path( X,Y, x, y+2,c,n);
        path(X,Y,x+1,y,c,n);
    }

}

int main()
{
    int n,x=0,y=0,c=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int X[1000],Y[1000];
    path(X,Y,x,y,c,n);
    return 0;
}