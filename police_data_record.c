#include<stdio.h>
#include<string.h>

typedef struct{
    int day,month,year;
}date;

typedef struct{
    char place[100],district[100],state[100],pincode[6];
}address;

typedef struct{
    char name[100];
    date DOB;
    char gender;
    float height;
    address residential_address;
    char crime;
    date DOA;
    char police_station[100];
    char court[100];
    address address_of_PS;
}criminal;




int main()
{   char choice;
    int i=0,n=0;
    criminal record[100];
    while(1){
        printf("++++ !! Welcome to Confidential Criminal Database !! ++++\n");
        printf("-- Database Operation Menu :\n");
        printf("(a) Add Criminal Record,\n");
        printf("(b) Delete Criminal Record,\n");
        printf("(c) Search Criminal Record,\n");
        printf("(d) print Criminal Record,\n");
        printf("(e) Exit.\n");
        printf("Enter your choice: ");

        scanf("%c",&choice);
        printf("\n\n");

        switch(choice){
            case 'a':{
                printf("++ Add Criminal Information ++\n");
                printf("-- Enter Criminal Name : ");
                //fflush(stdin);
                scanf("%s",record[i].name);
                printf("-- Enter Date of Birth (in DD/MM/YYYY Format): ");
                scanf("%d/%d/%d",&record[i].DOB.day,&record[i].DOB.month,&record[i].DOB.year);
                printf("-- Enter Gender (M=male ,F=female, O=others): ");
                
                
                getchar(record[i].gender);
                printf("-- Enter Height (in cm): ");
                scanf("%f",&record[i].height);
                printf("-- Enter Residence (in Place District State PIN Format): ");
                scanf("%s%s%s%s",record[i].residential_address.place,record[i].residential_address.district,record[i].residential_address.state,record[i].residential_address.pincode);
                printf("-- Enter Committted Crime (M=murder, T=theft, R=robbery, A=anti-social, O= others): ");
                scanf("%c",&record[i].crime);
                printf("-- Enter Date of Arrest (in DD/MM/YYYY Format): ");
                scanf("%d/%d/%d",&record[i].DOA.day,&record[i].DOA.month,&record[i].DOA.year);
                printf("-- Enter Police Station Name: ");
                scanf("%s",record[i].police_station);
                printf("-- Enter Jurisdiction Court Name: ");
                scanf("%s",record[i].court);
                printf("-- Enter PS Address (in Place District State PIN Format): ");
                scanf("%s%s%s%s",record[i].address_of_PS.place,record[i].address_of_PS.district,record[i].address_of_PS.state,record[i].address_of_PS.pincode);
                
                // Sorting
                if(i==0) continue;
                n=i+1;
                for(int round=1;round<=n;round++){
                    for(int j=0;j<n-round;j++){
                        if(strcmp(record[j].name,record[j+1].name)>0){
                            criminal temp=record[j];
                            record[j]=record[j+1];
                            record[j+1]=temp;
                        }
                    }
                }
                i++;    
            }continue; 






        }







    
    }
return 0;
}