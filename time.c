/*#include<stdio.h>
#include<math.h>
int isPrime(int n){
    int i=2,flag=1;
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{   int sum,i,j,a[100],count=0;
    printf("Enter the sum:");
    scanf("%d",&sum);
    /*for(i=2;i<sum;i++){
        if(isPrime(i)==1){
            a[count]=i;
            count++;
        }
    }
    for(i=0;i<count;i++){
        for( j=i+1;j<count;j++){
            if(a[i]+a[j]==sum){
                printf("%d=%d+%d\n",sum,a[i],a[j]);
            }
        }
    }
    for(i=2;i<sum;i++){
        if(isPrime(i)==1){
            for(j=i+1;j<sum;j++){
                if(isPrime(j)==1){
                    if(i+j==sum){
                        printf("%d=%d+%d\n",sum,i,j);
                    }
                }
            }
        }
    }
    

    
return 0;
} */
/*#include<stdio.h>
int main()
{   int n,a[100];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    if(n%2==1) printf("Median=%d",a[(n/2)]);
    else {
        printf("Median=%.1f",((float)a[n/2-1]+a[n/2])/2);
    }

return 0;
}*/
/*int sum_sq(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i]*a[i];
    }
    return sum;
}*/
/*int compareStr(char str1[],char str2[]){
    int count1,count2;
    for( count1=0;str1[count1]!='\0';count1++);
    for( count2=0;str2[count2]!='\0';count2++);
    if(count1!=count2) return 0;
    else{
        for(int i=0;i<count1;i++){
            if(str1[i]!=str2[i]) return 0;
        }
    }
    return 1;
}*/
/*#include<stdio.h>

void ADD(int A[],int B[]){
    int i=1,n=9;
    unsigned long long int a=0,b=0;
    while(n>=0){
        a=A[n]*i+a;
        b=B[n]*i+b;
        i*=10;
        n--;
    }
    printf("A=%llu\n",a);
    printf("B=%llu\n",b);
    printf("SUM=%llu\n",a+b);
}
int main()
{   int A[10]={0,0,0,0,0,0,0,8,2,3};
    int B[10]={0,0,0,0,0,0,0,2,4,9};
    ADD(A,B);
    
return 0;
}*/
//CARRY VALI APPROACH

/*void ADD(int A[],int B[]){
    int C[11],sum=0,carry=0,i=9;
    while(i>=0){
        sum=0;
        sum=A[i]+B[i]+carry;
        carry=(sum/10)%10;
        sum=sum%10;
        C[i+1]=sum;
    }
    C[0]=carry;
    for(int i=0;i<10;i++){
        printf("%d",C[i]);
    }
}*/
//PERFECT SQUARES DHUNDNE KA TARIKA
/*int count=0;
for(int i=1;i*i<=max;i++){
    for(int j=0;j<10;j++){
        if(i*i==a[j]){
            count ++;
        }
    }
}*/
/*int sum=0,flag=1;
    for(int i=0;i<100;i++){
        sum+=a[i];
        if(b[i]!=sum) flag=0;

}
return flag;
}*/
//GOOD Question
/*#include<stdio.h>
#define MAX_LENGTH 100

int main()
{
    int n,a[MAX_LENGTH],curr_count=1,max_count=0,index=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //SORTING
    //BUBBLE SORT
    /*for(int round=1;round<=n;round++){
        for(int i=0;i<=n-round;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    for(int i=1;i<n;i++){
        if(a[i-1]==a[i]){
            curr_count++;
            if(curr_count>max_count){
                max_count=curr_count;
                index=i;

            }     
        }

        else curr_count=1;
    }
    printf("%d %d",max_count,a[index]);
return 0;
}*/

/*int SUM_CHECK(int a[],int n,int sum){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                count++;
            }
        }
    }
    return count;
}*/
#include<stdio.h>
int main()
{
    int a=27 ,b=84;
    while(a%b!=0){
        int temp=a%b;
        a=b;
        b=temp;
    }
    printf("%d",b);
return 0;
}
