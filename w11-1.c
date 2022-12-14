/* Name - Aditya Rai
   Roll no - 21AG30002 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    char roll_no[10];
    char name[100];
}student;

void swap( student *a, student *b){
    student temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n,choice;
    student *p;
    printf("How many students?");
    scanf("%d",&n);
    
    p = (student *) malloc( n * sizeof(student) );

    printf("Enter the roll numbers and names:\n");

    for(int i = 0; i<n ;i++){
        scanf("%s",p[i].roll_no);
        
        scanf("%[^\n]s",p[i].name);    
    }
    //checking
    /*for( int i = 0;i<n;i++){
                printf("%d. %s \n",i+1,p[i].roll_no);
    }*/

    printf("Enter 1 to sort by roll number, 0 to sort by name: ");
    scanf("%d",&choice);

    switch(choice){

        case 1:{

            for( int round = 1; round <= n ;round++){
                for(int i = 0; i < n - round ; i++){
                    if( strcmp(p[i].roll_no,p[i+1].roll_no) > 0){
                        swap(&p[i],&p[i+1]);
                    }
                }
            }
            printf("After sorting by roll number:\n\n");
            
            for( int i = 0;i<n;i++){
                printf("%2d.  %s  %s\n",i+1,p[i].roll_no,p[i].name);
            }    

        }break;

        case 0:{

            for( int round = 1; round <= n ;round++){
                for(int i = 0; i < n - round ; i++){
                    if( strcmp(p[i].name,p[i+1].name) > 0){
                        swap(&p[i],&p[i+1]);
                    }
                }
            }
            printf("After sorting by name:\n\n");
            
            for( int i = 0;i<n;i++){
                printf("%2d.  %s %s\n",i+1,p[i].roll_no,p[i].name);
            }
        }break;

        default : printf("Invalid choice\n");    

    }

    return 0;
}