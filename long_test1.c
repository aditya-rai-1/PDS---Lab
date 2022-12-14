/* #include<stdio.h>
int main()
{
    char c;
    printf("Input: ");
    scanf("%c",&c);
    printf("Output: ");
    if(c>='a'&&c<='z') printf("%c",'A'+c-'a');
    else if(c>='A'&&c<='Z') printf("%c",'a'+c-'A');
    else printf("%c",c);
    return 0;
}  */

/* #include<stdio.h>
int main()
{   
    int n,t,days=0;
    printf("Type 1 for Jan, 2 for Feb, 3 for Mar, 4 for Apr: ");
    scanf("%d",&n);
    switch(n){
        case 4: days+=31;
        case 3: days+=28;
        case 2: days+=31;
        case 1: days+=0; 
    }
    printf("Type the day of the month: ");
    scanf("%d",&t);

    days+=t-1;
    switch(days%7){
        case 1: printf("Sat");
        break;
        case 2: printf("Sun");
        break;
        case 3: printf("Mon");
        break;
        case 4: printf("Tue");
        break;
        case 5: printf("Wed");
        break;
        case 6: printf("Thur");
        break;
        case 0: printf("Fri");
        break;
    }
return 0;
} */

/* #include<stdio.h>
int main()
{
    float x1,y1,x2,y2;
    printf("Enter x1,y1,x2,y2:");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    if((x1-y1)*(x2-y2)<0) printf("Yes.");
    else printf("No."); 
return 0;
} */

/* #include<stdio.h>
int main()
{
    int age,price;
    printf("Input: ");
    scanf("%d %d",&age,&price);
    printf("Output: ");
    if(age<=5) printf("0");
    else if(age>5&&age<10){
        price=((float)price+0.5)/2;
        printf("%d",price);
    }    

    else if(age>60){
        price =0.6*(float)price+0.5;
        printf("%d",price);
    }    
    else printf("%d",price);
return 0;
} */

/* #include<stdio.h>
int main()
{
    char c;
    printf("Input: ");
    scanf("%c",&c);
    printf("Output: ");
    if(c>=65&&c<=90) printf("Uppercase Character");
    else if(c>=97&&c<=122) printf("Lowercase Character");
    else if(c>='0'&&c<='9') printf("Digit");
    else printf("None");

return 0;
} */
/* #include<stdio.h>
int main()
{   float length,time;
    printf("Enter the length of station (in metre):");
    scanf("%f",&length);
    length=length/1000;
    printf("Enter the time to cross the station completely(in sec):");
    scanf("%f",&time);
    time=time/3600;
    printf("Velocity of train=%.2f",(1.5+length)/time);
return 0;
} */
// YOU HAVE TO TAKE CARE OF END CASES AND POSSIBILITY
//DO NOT RELY ON TEST CASES
/* #include<stdio.h>
int main()
{
    double a,b,c;
    printf("Input: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("Output: ");
    if(a+b+c==180.00&&a>0&&b>0&&c>0) printf("Valid");
    else printf("Invalid"); 
return 0;
} */
/* #include<stdio.h>
int main()
{
    int n,rem,i=1,t;
    long int m=0;
    printf("Input: ");
    scanf("%d",&n);
    printf("Output: ");
    while(n!=0){
        rem=n%2;
        m= m+rem*i;
        i*=10;
        n/=2;
    }
    //printf("%d\n",m);
    i=m%10000;
    m/=10000;
    m=i*10000+m;
    //printf("%d\n",m);
    i=1;
    t=0;
    while(m!=0){
        rem=m%10*i;
        t+=rem;
        i*=2;
        m/=10;
    }
    printf("%d",t);


return 0;
} */

/* #include<stdio.h>
int main()
{
    int x,y,z;
    printf("Input: ");
    scanf("%d %d %d",&x,&y,&z);
    int output=(1-z)*x + z*y;
    printf("Output: %d",output);
return 0;
} */
/* #include<stdio.h>
int main()
{
    int n1,n2,n3,n4,max;
    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    max=(n1>n2)?n1:n2;
    max=(max>n3)?max:n3;
    max=(max>n4)?max:n4;
    printf("Max = %d",max);   
return 0;
}*/
/* #include<stdio.h>
int main()
{
    float a,b;
    char c;
    printf("Enter two numbers and operator:");
    scanf("%f %f %c",&a,&b,&c);
    if(b==0.0&&c=='/') printf("Error (Can't divide by zero).");
    else{
        switch(c){
            case '+': printf("%f",a+b);
            break;
            case '-': printf("%f",a-b);
            break;
            case '*': printf("%f",a*b);
            break;
            case '/': printf("%f",a/b);  
            break;
            
        }
    }
return 0;
} */
/* #include<stdio.h>
int main()
{
    int n,i,flag=0,t;
    printf("Input: ");
    scanf("%d",&n);
    printf("Output: "); 
    for(i=2;i<=n;i++){
        flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0) flag=1;
        }
        t=n;
        if(flag==0){
            while((t%i==0)&&t!=0){
                printf("%d,",i);
                t/=i;
            }
        }
    }

return 0;
} */
/* #include<stdio.h>
int main()
{
    int n,x=1,y=1,z=1,t;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Output: ");
    if(n==1) printf("1");
    else if(n==2) printf("1");
    else if(n==3) printf("1");
    else{
        while((n-3)!=0){
            t=x+y+z;
            x=y;
            y=z;
            z=t;
            n--;   
        }
        printf("%d",t);
    }
return 0;
} */

/*#include<stdio.h>
int main()
{
    int n,x1,y1,x2,y2,x,y,d1,d2,flag=0;
    printf("How many points:?");
    scanf("%d",&n);
    printf("Enter x and y co-ordinates of point 1: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter x and y co-ordinates of point 2: ");
    scanf("%d %d",&x2,&y2);
    d1=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    for(int i=3;i<=n;i++){
        printf("Enter x and y co-ordinates of point %d: ",i);
        scanf("%d %d",&x,&y);
        d2=(x2-x)*(x2-x)+(y2-y)*(y2-y);
        if(d2!=d1) flag=1;
        x2=x;
        y2=y;
    }
    d2=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    if(d2!=d1) flag=1;
    if(flag==0) printf("Regular.\n");
    else printf("Irregular.\n");



return 0;
}*/


/* #include<stdio.h>
int main()
{
    int i,N,cOdd,cEven;
    printf("Enter a number: ");
    scanf("%d",&N);
    cOdd=0;
    cEven=0;
    for(int i=1;i*i*i<=N;i++){
        if(i%2==0) cOdd++;
        else cEven++;
    }
    printf("%d %d",cOdd,cEven);
return 0;
}*/

/* #include<stdio.h>
int isFact(int a,int c,int b,int fact1[]){
    int count=0;
    for(int i=a;i<=c;i++){
        if(b%i==0){
            fact1[count]=i;
            count++;
        }    
    }
    return count;
}
int main()
{   int b1,b2,fact1[100],fact2[100],com_fact[100],count3=0;
    printf("Enter the two numbers:");
    scanf("%d %d",&b1,&b2);
    int count1=isFact(1,100,b1,fact1);
    int count2=isFact(1,100,b2,fact2);
    for(int i=0;i<count1;i++){
        for(int j=i;j<count2;j++){
            if(fact1[i]==fact2[j]){
                com_fact[count3]=fact1[i];
                count3++;
            }
        }
    }
    for(int i=0;i<count3;i++){
        printf("%d",com_fact[i]);
        if(i<count3-1) printf(",");
    }
    
return 0;
}*/
/* #include<stdio.h>
int fact(int n){
    int i,p=1;
    for(i=1;i<=n;p*=i,i++);
    return p;
}
int main()
{   double curr_sum=1.0,t,x;
    int i=1;
    printf("Enter n:");
    scanf("%lf",&x);
    t=x;
    while((t/fact(i))>=0.01*curr_sum){
        curr_sum+=t/fact(i);
        t*=x;
        i++;
    }
    printf("%lf",curr_sum);
    
return 0;
} */
/* #include<stdio.h>
void swap(int a[],int n,int i){
    int temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
}
int main()
{   int a[100],n;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i+=2){
        swap(a,n,i);
    }
    printf("A={");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
        if(i<n-1) printf(",");
        else printf("}");
    }
    
return 0;
} */
#include<stdio.h>
#include<math.h>
int is_prime(int n){
    int i,flag=1;
    for(i=2;i<=sqrt(n);i++){
        if(n%2==0) flag=0;
    }
    return flag;
}
int main()
{   int sum,i,j;
    printf("Enter the sum:");
    scanf("%d",&sum);
    for( i=2;i<sum;i++){
        if(is_prime(i)==1){
            for(j>i;j<sum;j++){
                if(is_prime(j)==1){
                    if(i+j==sum){
                        printf("%d=%d+%d\n",sum,i,j);
                    }
                }
            }
        }
    }
    
return 0;
}

