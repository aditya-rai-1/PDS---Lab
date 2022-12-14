/*#include<stdio.h>

void search(int a[],int n,int *x,int *y,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            *x=1;
            *y=i;
            return;
        }
    }

    *x=0;*y=-1;

}



int main()
{   int a[10],n,ans,index,key;
    search(a,n,&ans,&index,key);
    
return 0;
} */

/* void num(char s[],int *d,int *l,int *u){
    *l=0;*u=0;*d=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z') *l++;
        else if(s[i]>='A'&&s[i]<='Z') *u++;
        else if(s[i]>='0'&&s[i]<='9') *d++;
    }
    return;
} */

/* #include<stdio.h>

typedef struct{
    int x;
    int y;
}point;

int dist_sq(point a1,point a2);
void solve(point data[],point* p1,point *p2,int n);

int main()
{   point data[20],p1,p2;
    int n; 
    solve(data,&p1,&p2,n);


    return 0;
}

void solve(point data[],point* p1,point *p2,int n){
    int dist,max=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            dist= dist_sq(data[i],data[j]);

            if(dist>max){
                max = dist;
                (*p1).x = data[i].x;
                (*p2).x = data[j].x;
                (*p1).y = data[i].y;
                (*p2).y = data[j].y;
            }

        }
    }
}

int dist_sq(point a1,point a2){
    int d;
    d = (a1.x - a2.x)*(a1.x - a2.x) + (a1.y - a2.y)*(a1.y - a2.y);
    return d; 
} */

/* #include<stdio.h>
int main()
{
    int a[20],b[20],s_union,s_int,n1,n2;
    solve(a,n1,b,n2,&s_union,&s_int);
return 0;
}

void solve(int a[],int n1,int b[],int n2,int *S_U,int *S_I){
    int c[40],dist_a=0,dist_b=0;
    *S_U=0;*S_I=0;

    for(int i = 0;i< n1 + n2;i++){
        if(i<n1) c[i]=a[i];
        else c[i]=b[i];
    }
    for(int i=0;i<n1+n2;i++){
        int flag=0;
        for(int j=0;j<i;j++){
            if(a[i]==a[j]) flag=1;
        }
        if(flag==0){
            *S_U++;
            if(i<n1) dist_a++;
            else dist_b++;
    }

    *S_I= dist_a + dist_b - *S_U;
} */
/* #include<stdio.h>

int check(char s[],int i,int j){
    //PALINDROME CHECK
    int flag=1;
    while(i<j){
        if(s[i++]!=s[j--]){
            flag=0;
            break;
        }    
    }

    return flag;    
}

void solve(char s[],int *max,int *index){
    int *max=-1;
    for(int i=0;s[i]!='\0';i++){
        for(int j=i+1;s[j]!='\0';j++){
            if(check(s,i,j)==1){
                if(j-i+1>*max){
                    *max=j-i+1;
                    *index=i;
                }
            }
        }
    }

    return;
}

int main()
{   char s[100];
    int max,index;
    
    solve(s,&max,&index);
    return 0;
} */

#include<stdio.h>
int main()
{
    int a[5][5],sum=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum++;
            a[i][j]=sum;
        }
    }
    for(int i=0;i<25;i++){
        printf("%2d element = %2d\n",i,*(*a+i));
    }
return 0;
}