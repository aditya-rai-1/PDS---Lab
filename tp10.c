#include<stdio.h>
int main()
{
    int a[10][10],b[90],c[9],i,j,k,m,n,count,size,max=0,flag;
    printf("How many people and friendships? ");
    scanf("%d%d",&n,&m);
    for(i=0; i<n; ++i)
    {
        for(j=0; j<n; ++j)
        {
            a[i][j]=0;
        }
    }
    for(i=0; i<2*m; i+=2)
    {
        printf("Enter the two guests participating in friendship %d: ",(i/2)+1);
        scanf("%d%d",&b[i],&b[i+1]);
    }
    for(i=0; i<2*m; i+=2)
    {
        a[b[i]-1][b[i+1]-1]=1;
        a[b[i+1]-1][b[i]-1]=1;
    }
    for (i=0; i<n-2; ++i)
    {
        count=0;
        c[0]=i;
        for(j=0; j<n; ++j)
        {
            if(a[i][j]==1)
            {
                count++;
                c[count]=j;
            }
        }
        if(count==0) continue;
        for(j=1; j<count; ++j)
        {
            for(k=j+1; k<=count; ++k)
            {
                flag=0;
                if(a[c[j]][c[k]]==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
        if(flag==1) continue;
        if(flag==0)
        {
            size=count+1;
        }
        if(max<size)
            max=size;
    }
    for (i=0; i<n-2; ++i)
    {
        count=0;
        c[0]=i;
        for(j=0; j<n; ++j)
        {
            if(a[i][j]==1)
            {
                count++;
                c[count]=j;
            }
        }
        if(count==0) continue;
        for(j=1; j<count; ++j)
        {
            for(k=j+1; k<=count; ++k)
            {
                flag=0;
                if(a[c[j]][c[k]]==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
        if(flag==1) continue;
        if(flag==0)
        {
            size=count+1;
        }
        if(max==size)
        {
            printf("Largest friendship group:\n");
            for(j=0; j<=count; ++j)
                printf("%d ",c[j]+1);
            printf("\n");
            printf("Size = %d",max);
            break;
        }
    }
    return 0;
}