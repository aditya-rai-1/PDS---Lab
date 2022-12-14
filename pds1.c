#include<stdio.h>
#include<string.h>
int comp(char s1[],char s2[],int n);

typedef struct{
    char name[20],unit[10];
    float price;
}item;

int main()
{
    item s[]={ {"BUTTER COOKIES", "PACK", 25},{"CASHEW COOKIES", "PACK", 30},{"CREAM CAKE", "SLICE", 22},{"LEMON JUICE", "LITRE", 35},{"VEG CASHEW CAKE", "SLICE", 18},{"MANGO JUICE", "LITRE", 78},{"COOKIES (PLAIN)", "PACK", 15},{"ORANGE JUICE", "LITRE", 72},{"MILK BISCUITS", "PACK", 12},{"PLAIN VEG CAKE", "SLICE", 20},{"BUTTER FRUIT CAKE", "SLICE", 25},{"PINEAPPLE JUICE", "LITRE", 65} };
    float rate[12]={25,30,22,35,18,78,15,72,12,20,25,65};
    char key[20];
    int choice,quantity,flag=0;
    printf("Enter a keyword:");
    scanf("%s",key);
    printf("\n\nItems found matching with your keyword:\n");
    for(int i=0;i<12;i++){
        if(comp(key,s[i].name,i+1)){
            printf("\t--- Rs.%.2f per %s\n",s[i].price,s[i].unit);
            flag=1;
        }

    }
    if(flag==0){
        printf("No item with given keyword exists :(\nSORRY");
        return 0;
    }

    printf("\nEnter your choice:");
    scanf("%d",&choice);
    printf("Enter the quantity:");
    scanf("%d",&quantity);

    printf("\nTo pay (with GST) = Rs. %d.",((int)(1.1*rate[choice-1]*quantity + 0.5)));



    return 0;
}

int comp(char s1[],char s2[],int n){
    int i,j=0,k,flag;
    for(i=0;i<=strlen(s2)-strlen(s1);i++){
        flag=0;
        j=0;
        k=i;
        while(j<strlen(s1)){
            if(!(s2[k]==s1[j]||s2[k]==s1[j]+ 'a'-'A'||s2[k]==s1[j] + 'A'-'a')){
                flag=1;
                break;
            }
            k++;j++;
            
        }
        if(flag==0){
            printf("%d : %s",n,s2);
            return 1;
        }    
    }
    return 0;
}

