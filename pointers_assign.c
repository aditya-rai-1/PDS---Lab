/*/*#include <stdio.h>
int *input_array(int *p, int *n);
int *reverse_array(int *p, int *n);
int *check_unique_array(int *p, int *n);
int main()
{
    int n, a[100], *size, *reverse, *check;
    printf("Enter the maximum size of an array:");
    scanf("%d", &n);
    size = input_array(a, &n);
    printf("\n%d\n", *size);
    reverse = reverse_array(a, size);
    if ((*reverse) != 0)
    {
        printf("Reversed array:");
        for (int i = 0; i < (*size); i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    else
        printf("No elements found.\n");
    check = check_unique_array(a, size);
    if ((*check) == 0)
        printf("Array elements are not unique.");
    else
        printf("Array elements are unique.");
    return 0;
}

int *input_array(int *p, int *n)
{
    int i, *d;
    d = &i;
    printf("Enter array elements:");
    for ((*d) = 0; (*d) < (*n); (*d)++)
    {
        scanf("%d", &p[(*d)]);
        if (p[(*d)] < 0)
            break;
    }

    for(int j = 0;j< (*d);j++){
        printf("%d ",p[j]);
    }

    return d;
}

int *reverse_array(int *p, int *n)
{
    int *x, valid;
    x = &valid;
    *x = ((*n) != 0) ? 1 : 0;

    for (int i = 0; i < *n / 2; i++)
    {
        int temp = p[i];
        p[i] = p[*n - 1 - i];
        p[*n - 1 - i] = temp;
    }
    return x;
}
int* check_unique_array(int *p, int *n)
{
    int *x, flag = 1;
    x = &flag;
    for (int i = 0; i < (*n); i++)
    {
        for (int j = i + 1; j < (*n); j++)
        {
            if (p[i] == p[j])
            {
                flag = 0;
                return x;
            }
        }
    }
    return x;
}*/
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
char* enter_string(){
    char s[20];
    char* p=s;
    printf("Enter the string:");
    scanf("%s",s);
    return p;
}

void print_string(char *s){
    printf("%s\n",s);
}

void compute_vowel_consonant(char *s,int *vowel,int *consonant){
    *vowel= 0; *consonant = 0;
    for(int i=0;i < strlen(s);i++){
        switch(s[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': *vowel++;
            break;
            default : *consonant++;
        }
    }
}

void swap(char *a ,char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute_string( char*s){
    
    for(int i = 0;i < strlen(s);i++){
        for( int j = 0; j< strlen(s);j++){
            swap( &s[i],&s[j]);
            printf("%s\n",s);
            swap(&s[i],&s[j]);
        }
    }
}

int main()
{   
    char *s;
    //s = (char*) malloc(20 * sizeof(char));
    int vowel,consonant;
    s = enter_string;
    print_string(s);
    compute_vowel_consonant(s,&vowel,&consonant);
    printf("Number of vowels = %d\n",vowel);
    printf("Number of consonants = %d\n",consonant);
    printf("Permutations of the string %s:\n",s);
    permute_string(s);
}*/
/*void swap(char *a ,char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
//void permute(char *s);

int main()
{
    char p[] ="aditya";
    /*char s[10];
    for(int i = 0;i < strlen(p);i++){
        //char s[] = "abcd";
        strcpy(s,p);
        swap(&s[0],&s[i]);
        for( int j = i; j< strlen(s);j++){
            swap( &s[i],&s[j]);
            printf("%s\n",s);
            swap(&s[i],&s[j]);
        }
    }*/
    //permute(p);
    /*permute(p,0);
    return 0;
}*/
/*int index=0;
void permute(char *s){
    if(index == strlen(s)){
        printf("%s\n",s);
        return;
    }
    for( int i = index;i< strlen(s);i++){
        swap(&s[index],&s[i]);
        index++;
        permute(s);
        index--;
        swap(&s[index],&s[i]);
    }
}*/
//without global variable
/*void permute(char s[],int i){
    if( i == strlen(s)){
        printf("%s\n",s);
        return;
    }
    for( int j = i;j<strlen(s);j++){
        swap(&s[i],&s[j]);
        permute(s,i+1);
        swap(&s[i],&s[j]);
    }
    return;
}*/
#include<stdio.h>

typedef struct{
    int roll_no;
    char name[20];
    int marks[3];
    int total_marks;
}student;

void input_( student *p,int n);
void total_( student *p,int n);
void sort_(student *p,int *n);
void print_(student *p,int n);


int main()
{
    student data[10],*p;
    p = data;
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    input_(p,n);
    total_(p,n);
    printf("Original Student Records:\n\n");
    print_(p,n);
    printf("Sorted Student Records:\n\n");
    sort_(p,&n);
    print_(p,n);

    
    

    return 0;
}

void input_( student *p,int n)
{
    int i = 0;
    printf("Enter the details of %d students\n",n);
    for(int i = 0;i<n;i++){
        printf("Enter the roll no. of student %d:",i+1);
        scanf("%d",&p[i].roll_no);
        printf("Enter the name of student %d:",i+1);
        scanf("%s",&p[i].name);
        printf("Enter the marks in 3 subjects of student %d:",i+1);
        scanf("%d %d %d",&p[i].marks[0],&p[i].marks[1],&p[i].marks[2]);
    }
}

void total_( student *p,int n){
    for( int i = 0;i<n;i++){
        p[i].total_marks = p[i].marks[0] + p[i].marks[1] + p[i].marks[2];
    }
}

void sort_(student *p,int *n){
    for(int round = 1;round <= (*n);round++){
        for(int i = 0;i < (*n) - round;i++){
            if( p[i].total_marks > p[i+1].total_marks){
                student temp = p[i];
                p[i] = p[i+1];
                p[i+1] = temp;
            }
        }
    }

}

void print_(student *p,int n){
    for(int i = 0;i<n;i++){
        printf("Student[%d] = %d\t%s\t%2d %2d %2d\t%3d\n",i+1,p[i].roll_no,p[i].name,p[i].marks[0],p[i].marks[1],p[i].marks[2],p[i].total_marks);
    }
}