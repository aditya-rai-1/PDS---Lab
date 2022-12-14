/* Name - Aditya Rai
   Roll no - 21AG30002 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    char roll_no[10];
    char name[100];
}student;

void bin(student *p,char *key,int l,int u);
int count = 1;


int main()
{
    int n;
    student *p;
    char key[10];
    printf("How many students?");
    scanf("%d",&n);
    
    p = (student *) malloc( n * sizeof(student) );

    printf("Enter the roll numbers and names (sorted by roll number) :\n");

    for(int i = 0; i<n ;i++){
        scanf("%s",p[i].roll_no);
        
        scanf("%[^\n]s",p[i].name);    
    }
    /*for( int i = 0;i<n;i++){
        printf("%2d.  %s  %s\n",i+1,p[i].roll_no,p[i].name);
    }*/

    printf("Enter prefix:");
    scanf("%s",key);

    bin(p,key,0,n-1);
    if(count ==1 ){
        printf("No elements found.");
    }

    return 0;
}

int compare( char *key,char *a){
    int n = strlen(key);

    char b[10];
    strcpy(b,a);
    b[n] = '\0';

    return strcmp(key,b);
}



void bin(student *p,char *key,int l,int u){

    if(l>u) return;

    int middle = (l+u)/2;
    
        if(compare(key,p[middle].roll_no) == 0){
            int temp = middle;
            while(compare(key,p[temp++].roll_no) == 0){
                printf("%d %s %s\n",count,p[temp].roll_no,p[temp].name);
                count++;
                //middle++;
            }
            temp = middle;
            while(compare(key,p[--temp].roll_no) == 0){
                printf("%d %s %s\n",count,p[temp].roll_no,p[temp].name);
                count++;
                //middle++;
            }

            return;
            
        }

        else if(compare(key,p[middle].roll_no) > 0){
            bin(p,key,middle+1,u);

        }
        else if(compare(key,p[middle].roll_no) < 0){
            bin(p,key,l,middle-1);
        }
    

    return;
}