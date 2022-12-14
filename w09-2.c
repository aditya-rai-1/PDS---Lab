#include<stdio.h>

typedef struct{
    int x,y,c;
}term;
int insert( term P[]);
int addPoly(term P1[10],term P2[10],int t1,int t2,term SUM[20]);

int main()
{   term P1[10],P2[10],SUM[20];
    int count1,count2,count;
    printf("Input polynomial 1:\n");
    int t =insert(P1);
    count1=t-1;
    printf("Polynomial 1:\n");

    for(int i=0;i<count1;i++){
        printf("(%d, %d, %d)\n",P1[i].x,P1[i].y,P1[i].c);
    }

    printf("Input Polynomial 2:\n");

    t= insert(P2);
    count2=t-1;
    printf("Polynomial 2:\n");
    for(int i=0;i<count2;i++){
        printf("(%d, %d, %d)\n",P2[i].x,P2[i].y,P2[i].c);
    }
    
    printf("Sum:\n");

    addPoly(P1,P2,count1,count2,SUM);


    
    
return 0;
}

int insert( term P[]){
    int i=0,count=0;
    term temp;
    do{
        printf("Enter exponent of x, exponent of y and coefficient:");
        scanf("%d %d %d",&P[i].x,&P[i].y,&P[i].c);
        i++;
        count++;
    }while(P[i-1].x!=0&&P[i-1].y!=0&&P[i-1].c!=0);

    //SORTING
    for(int round=1;round<=count ;round++){
        for( i=0;i<count-1;i++){
            if(P[i].x>P[i+1].x){
                temp=P[i];
                P[i]=P[i+1];
                P[i+1]=temp;
            }
        }
    }
    for(int round=1;round<=count;round++){
        for( i=0;i<count-1;i++){
            if((P[i].x==P[i+1].x)&&(P[i].y>P[i+1].y)){
                temp=P[i];
                P[i]=P[i+1];
                P[i+1]=temp;
            }

        }
    }
    return count;    

}


int addPoly(term P1[10],term P2[10],int t1,int t2,term SUM[20])
 {
 int i,j,k;


 i=0;
 j=0;
 k=0;

 while(i<t1 && j<t2)
 {
  if(P1[i].x==P2[j].x&&P1[i].y==P2[j].y)
  {
   SUM[k]=P1[i];   
   SUM[k].c=P1[i].c + P2[j].c;
   if(SUM[k].c!=0)
   printf("(%d, %d, %d)\n",SUM[k].x,SUM[k].y,SUM[k].c);

   i++;
   j++;
   k++;
  }
  else if(P1[i].x<P2[j].x)
  {
   SUM[k]=P1[i];
   
   printf("(%d, %d, %d)\n",SUM[k].x,SUM[k].y,SUM[k].c);
   i++;
   k++;
  }
  else
  {
   SUM[k]=P2[j];
   
   printf("(%d, %d, %d)\n",SUM[k].x,SUM[k].y,SUM[k].c);
   j++;
   k++;
  }
 }

 /*for rest over terms of polynomial 1*/ 
 while(i<t1)
 {
  SUM[k]=P1[i];
  printf("(%d, %d, %d)\n",SUM[k].x,SUM[k].y,SUM[k].c);
  i++;
  k++;
 }
  /*for rest over terms of polynomial 2*/ 
 while(j<t2)
 {
  SUM[k]=P2[j];
  printf("(%d, %d, %d)\n",SUM[k].x,SUM[k].y,SUM[k].c);
  j++;
  k++;
 } 

 return(k);
 }
  