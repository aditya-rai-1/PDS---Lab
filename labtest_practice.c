#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*typedef struct{
    char n[20],s[20];
    float c;
}student;

int binary_search(student a[],int l,int r,float x){
    if( l > r) return r+1;
    int mid = (l + r)/2;
    if( a[mid].c >= x){
        while( a[mid].c >= x && mid >= 0) mid--; 
        return (mid + 1);
    }
    else{
        return binary_search(a,mid + 1,r,x);
    }

}

int main()
{   student *p;
    int n,j;
    float cutoff;

    printf("Enter #students:");
    scanf("%d",&n);

    p = (student *) malloc( n * sizeof(student));

    printf("Enter the name, surname, and cgpa:\n");
    for(int i = 0; i < n; i++){
        scanf("%s %s %f",p[i].n,p[i].s,&p[i].c);
    }

    printf("Enter the cutoff cgpa:");
    scanf("%f",&cutoff);

    printf("Students with cgpa >= cut-off:\n");

    j = binary_search(p,0,n-1,cutoff) ;
    
    if(j == n) printf("Empty!\n");
    else{
        for(int i = j; i < n;i++){
            int l = strlen(p[i].s) + strlen(p[i].n) + 2;
            printf("%d. %s %s ", i + 1,p[i].n,p[i].s);

            for(;l <= 32;l++) printf("-");
            printf("   %.2f\n",p[i].c);
        }
    }
   
return 0;
}*/

//THAMBA
/*int main()
{   int s,e; //start and end respectively.
    char s[101];
    printf("Enter a string of at most 100 characters:");
    scanf("%s",s);
    int l = strlen(s) > 31 ? 31 : strlen(s);  //Assignment of length of the considered part
    s[l] = '\0'; //chopping off the extra part
    printf("String under consideration = %s, length = %d",s,l);


    return 0;
}

void max_per(char s[],int *s,int *e){


}*/

/*
int main()
{   int n,*p;
    printf("Enter the length of array:");
    scanf("%d",&n);
    
    p = (int *) malloc (n * sizeof(int ));

    printf("Enter %d integers :",n);

    for(int i = 0;i < n;i++){
        scanf("%d",&p[i]);
    }

    printf("Input elements: ");
    for(int j = 0;j<n;j++){
        printf("%2d ",p[j]);
    }
    printf("\n");

    for(int round = 1;round <= n;round++){
        int temp = p[n-1];
        for(int i = n-1; i >= 1;i--){
            p[i] = p[i-1];
        }
        p[0] = temp;
        printf("After shift %d: ",round);
        for(int j = 0;j<n;j++){
            printf("%2d ",p[j]);
        }
        printf("\n");
    }    



    return 0;
}*/
/*
int exchange(int x);
void swap(int *a,int *b);

int main()
{
    int n,*p;

    printf("Enter n:");
    scanf("%d",&n);

    p = (int *) malloc (n * sizeof(int));

    printf("Enter %d numbers: ",n);
    for(int i = 0;i<n;i++){
        scanf("%d",&p[i]);
    }
    printf("New numbers =");
    for(int i = 0;i<n;i++){
        p[i] = exchange(p[i]);
        printf("%10d ",p[i]);
    }

    printf("\nNumbers x 5 =");
    for(int i = 0;i<n;i++){
        printf("%10d ",p[i]*5);
    }



    return 0;    
}



int exchange(int x){
    
    int a[10] = {0};
    int t;
    t = (x >= 0)? x : -x;
    
    int n = 0;
    while( t != 0){
        n++;
        t/=10;            //NUMBER OF DIGITS.
    }
    n = (n > 3)? n : 4;

    t = (x >= 0)? x : -x;
    for(int i = n-1; i>= 0;i--){
        a[i] = t%10;
        t/=10;
    }

    swap(&a[0],&a[n-2]);
    swap(&a[1],&a[n-1]);

    t = 0;
    for(int i = 0;i<n;i++){
        t = t*10 + a[i];
    }

    t = (x >= 0)? t : -t;

    return t;
}

*/

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

/*
typedef struct{
    int x,y,z;
}vector;

int dot_product(vector a,vector b){

    return ( (a.x * b.x) + (a.y * b.y) + (a.z * b.z) );
}

vector cross_product(vector a,vector b){
    vector c;
    c.x = ((a.y * b.z) - (a.z * b.y));
    c.y = ((a.z * b.x) - (a.x * b.z));
    c.z = ((a.x * b.y) - (a.y * b.x));

    return c;
}

int main()
{
    int x,y,z;
    vector a,b,c;

    printf("Enter vector a:");
    scanf("%d %d %d ",&x,&y,&z);
    a.x = x; a.y = y; a.z = z;

    printf("Enter vector b:");
    scanf("%d %d %d ",&x,&y,&z);
    b.x = x; b.y = y; b.z = z;

    printf("Dot product = %d\n",dot_product(a,b));

    c = cross_product(a,b);
    printf("Cross product = (%2d,%2d,%2d)",c.x,c.y,c.z);

    return 1;
}*/
/*
int main()
{   
    int m,n,p,a[10][10],b[10][10],c[10][10];

    printf("Enter #rows & #columns of 1st matrix:");
    scanf("%d %d",&m,&n);
    printf("Enter #columns of 2nd matrix:");
    scanf("%d",&p);

    printf("Enter matrix A:\n");
    for(int i = 0;i<m; i++){
        for(int j = 0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter matrix B:\n");
    for(int i = 0;i<n; i++){
        for(int j = 0; j<p; j++){
            scanf("%d",&b[i][j]);
        }
    }

    //COMPUTATIONS
    for(int i = 0;i < m; i++){ 
        for(int k = 0; k < p;k++){
            int sum = 0;
            for(int j = 0;j < n;j++){
                sum += a[i][j] * b[j][k];
            }
            c[i][k] = sum;
        }
    }


    printf("Output matrix :\n");
    for(int i = 0;i<m; i++){
        for(int j = 0; j<p; j++){
            printf("%2d ",c[i][j]);
        }
        printf("\n");
    }


    return 0;
}*/

/*
int Ispresent(int a[],int i,int key);
void bubble_sort(int a[],int n);

int main()
{
    int n,a[100],num,m;

    printf("Enter n:");
    scanf("%d",&n);

    int i = 1;
    printf("Enter %d distinct numbers:\n",n);
    scanf("%d",&a[0]);
    while(i < n){
        scanf("%d",&num);
        if(Ispresent(a,i-1,num) == 1){
            printf("Number already exists; please enter a different number.\n");
            continue;
        }
        else a[i] = num;
        i++;
    }

    printf("Numbers in the array:\n");
    for(int i = 0; i < n;i++){
        printf("%2d ",a[i]);
    }
    

    bubble_sort(a,n);


    printf("\nEnter m:");
    scanf("%d",&m);
    printf("Smallest %d numbers in order:\n",m);

    for(int i = 0;i<m;i++){
        printf("%2d ",a[i]);
    }
    
    return 0;
}

int Ispresent(int a[],int i,int key){
    int flag = 0;
    for(int j = 0; j<= i;j++){
        if(a[j] == key){
            flag = 1;
            break;
        }
    }
    return flag;
}

void bubble_sort(int a[],int n){
    for(int round = 1; round <= n; round++){
        for(int i = 0;i < n - round; i++){
            if(a[i] > a[i+1]){
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

    return;
}*/

//Important
/*
int count = 0;

void permute(int a[],int n,int i){
    if(i == n){
        count++;
        if(a[0] == 0){
            printf(" ");
        }
        else printf("%d",a[0]);
        for(int j = 1;j < n;j++){
            printf("%d",a[j]);
        }
        printf(" ");
        //count++;
        if(count%10 == 0) printf("\n");

        return;
    }
    else{
        for(int j = i;j < n;j++){
            swap(&a[i],&a[j]);
            permute(a,n,i+1);
            swap(&a[i],&a[j]);  //BACKTRACKING
        }
    }
    return;
}

int main()
{
    int n,a[10];

    printf("Enter the number of digits:");
    scanf("%d",&n);

    printf("Enter %d distinct digits:",n);
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    permute(a,n,0);
    printf("Count = %d",count);

    return 0;
}
*/

/*
void print_times(int i,int m){
    for(int j = 1;j<=i ; j++){
        printf("%d",m);
    }
    return;
}


int main()
{
    int n;
    printf("Enter a whole number:");
    scanf("%d",&n);

    for(int i = 1; i*i <= n; i++){
        int j = 0;
        printf("%d = ",i*i);
        while( j < i*i){
            print_times(i,1);
            j+=i;
            if(j < i*i){
                print_times(i,0);
            }
            j+=i;
        }
        printf("\n");
    }


    return 0;
}*/
/*
int main()
{
    int i = 0,a[12],sum = 0,product = 1;

    for( i = 0; i < 12 ; i++){
        product *= (i+1);
        sum += product;
        a[i] = sum;
        printf("%d ",a[i]);
    }

    return 0;
}*/
/*
int reverse(int n){
    int t = 0;
    while(n != 0 ){
        t = (t*10 + n%10);
        n/=10;
    }
    return t;
}

int main()
{   int n;

    printf("Enter a positive integer:");
    scanf("%d",&n);

    printf("Reverse number: %d\n",reverse(n));

    return 0;
}*/

/*
int nCr(int n,int r){
    if( n == r ) return 1;
    if( r == 1 ) return n;
    if( r == 0 )  return 1;

    else return ( nCr(n-1,r-1) + nCr(n-1,r));
}

int main()
{   int n;
    printf("Enter n:");
    scanf("%d",&n);

    printf("Result : ");
    for(int r = 0; r <= n; r++){
        printf("%d ",nCr(n,r));
    }

    printf("\n");

    return 0;
}*/

/*
int first_digit(int n){
    int r;
    while( n != 0){
        r = n%10;
        n/=10;
    }
    return n;
}*/

int no_of_digits(int n){
    int i = 0;
    while(n != 0){
        i++;
        n/=10;
    }
    return i;
}

int main()
{
    int n,num,a[4];
    
    printf("Enter n:");
    scanf("%d",&num);

    n = no_of_digits(num);
    for( int i = n-1 ; i >= 0 ;i--){
        int r = num%10;
        switch(r){
            case 2 : a[i] = 23;
            break;
            case 3 : a[i] = 34;
            break;
            case 5 : a[i] = 56;
            break;
            case 7 : a[i] = 78;
            break;
            default : a[i] = r;
        }
        num/=10;
    }

    printf("m = ");
    for(int i = 0; i<n;i++){
        printf("%d",a[i]);
    }

    return 0;
}