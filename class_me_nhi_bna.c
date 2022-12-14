#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    char roll[10];
    char name[100];
}student;

int compare( char key[], char a[]){
    char b[10];
     int n = strlen(key);
     strcpy(b,a);
     b[n] = '\0';

     return (strcmp(b,key));
}

void binary_search( student *p,int l,int r,char key[]){
    if( l > r){
        printf("None found!\n");
        return;
    }

    int mid = (l + r)/2;

    if(compare(key,p[mid].roll) == 0){
        printf("Found:\n");
        int t = mid;
        //printf("%d\n",t);
        while( (t >= 0) && (compare(key,p[t].roll) == 0)){
            t--;
            //printf("%d\n",t);
        }
        //printf("%d\n",t);
        
        t = t + 1;
        //printf("%d\n",t);

        for(; compare(key,p[t].roll) == 0 && (t <= r); t++){
            printf("%s %s\n",p[t].roll,p[t].name);
        }
        return;
    }

    if(compare(key,p[mid].roll) > 0) binary_search(p,l,mid - 1,key);

    else binary_search(p,mid + 1,r,key);

return;
}



int main()
{
    
    student *p;
    char key[10];
    int n;

    printf("How many students?");
    scanf("%d",&n);

    p = (student *) malloc ( n * sizeof(student));

    printf("Enter roll numbers and names (sorted by roll number):\n");

    for(int i = 0; i < n; i++){
        scanf("%s",p[i].roll);
        scanf("%[^\n]s",p[i].name);
    }

    printf("Enter prefix: ");
    scanf("%s",key);
    
    binary_search(p,0,n-1,key);

return 0;
}