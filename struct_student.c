#include<stdio.h>

typedef struct{
    char name[20];
    int roll_no;
    float CGPA;
}STUDENT;

STUDENT search(STUDENT data[],int n,char s[]);



int main()
{   STUDENT data[100];
    char s[20];
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",data[i].name);
        printf("Enter the roll number of student %d: ",i+1);
        scanf("%d",&data[i].roll_no);
        printf("Enter the CGPA of student %d: ",i+1);
        scanf("%f",&data[i].CGPA);
        printf("\n\n");
    }
    printf("Enter the name of the student ,you are looking for:");
    scanf("%s",s);
    STUDENT found=search(data,n,s);
    
    printf("\n");
    printf("Name=%s\n",found.name);
    printf("Roll No.=%d\n",found.roll_no);
    printf("CGPA=%f\n",found.CGPA);


    
return 0;
}
STUDENT search(STUDENT data[],int n,char s[]){
    int flag;
    for(int i=0;i<n;i++){
        flag=0;
        for(int j=0;s[j]!='\0';j++){
            if(data[i].name[j]!=s[j]) flag=1;     
        }
        if(flag==0){
            return data[i];
        }
    }
    
    STUDENT not_found;
    not_found.name[20] = ""; 
    not_found.roll_no=404;
    not_found.CGPA=404.0;
    return not_found;

}