/*#include<stdio.h>
int max(int A[],int n);
int main()
{
    int a[100],n,min_idx;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",max(a,n));
    return 0;
}*/
    /*for(int i=0;i<n;i++){
        min_idx=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                min_idx=j;
            }
        }
        int temp=a[i];
        a[i]=a[min_idx];
        a[min_idx]=temp;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
return 0;
}*/
//RECURSION
//gcd computation using recursion
/*int gcd(int m,int n){
    if(m==n) return m;
    else{
        return gcd(n,m%n);
    }
}*/

/*int max(int A[],int n){
    if(n==1) return A[0];
    else{
        if(A[n-1]>max(A,n-1)) return A[n-1];
        else return max(A,n-1);
    }
}*/
/*int bin_search(int a[],int l,int u,int key){
    int mid=(l+u)/2;
    while(l<u){
        if(mid==key) return 1;
        else if(mid>key){
            return bin_search(a,l,mid-1,key);
        }
        else  return bin_search(a,mid+1,u,key);
    }
    return 0;
}*/
#include<stdio.h>

void paths(int n,char from,char to ,char aux){
    if(n==1){
        printf("%d from %c to %c\n",n,from,to);
    }
    else{
        paths(n-1,from,aux,to);
        printf("%d from %c to %c\n",n,from,to);
        paths(n-1,aux,to,from);
    }
}
int main()
{   int n;
    char from='A',to='C',aux='B';
    paths(4,from,to,aux);



    return 0;
}