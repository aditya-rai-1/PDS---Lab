/* Name - Aditya Rai
   Roll no- 21AG30002 */

#include <stdio.h>

#if defined(_WIN32) || defined(__MSDOS__)
   #define club    "\x05"
   #define diamond "\x04"
   #define heart   "\x03"
   #define spade   "\x06"
#else
   #define club    "\xe2\x99\xa3"
   #define diamond "\xe2\x99\xa6"
   #define heart   "\xe2\x99\xa5"
   #define spade   "\xe2\x99\xa0"
#endif

typedef struct{
    char num,suit;
}card;


int main(void){
  //printf("\n%s\n%s\n%s\n%s\n", club, diamond, heart, spade);

  card a[48];
  int i=0,j=0;
  char s[100];
  printf("Enter the sequence of cards:\n");
  scanf("%[^\n]s",s);
  for( i=0;s[i]!='\0';i++);   //finding length of string 
  int l=i;
  i=0;
  while(i<l){
      a[j].num = s[i];
      a[j].suit = s[i+1];
      j++;
      i+=3;
  }
  int a_length=j;

  /*for(j=0;j<a_length;j++){
      printf("%c%c ",a[j].num,a[j].suit);
  }*/
    for(int round=1;round<=a_length;round++){
        for(i=0;i<a_length-round;i++){
            if(a[i].suit>a[i+1].suit){
                card temp=a[i];
                a[i]=a[i+1];
                a[i+1] = temp;
            }
        }
    }
  printf("\n");

    /*for(j=0;j<a_length;j++){
        printf("%c%c ",a[j].num,a[j].suit);
    }*/

    for(int round=1;round<=a_length;round++){
        for(i=0;i<a_length-round;i++){
            if((a[i].suit==a[i+1].suit) && (a[i].num>a[i+1].num) &&(a[i].num>='1' || a[i].num<='9') ){
                card temp=a[i];
                a[i]=a[i+1];
                a[i+1] = temp;
            }
        }
    }
    printf("\n");

    /*for(j=0;j<a_length;j++){
        printf("%c%c ",a[j].num,a[j].suit);
    }*/
    i=0;
    printf("After ordering:\n");

    while(i<a_length){
        switch(a[i].suit){
            case 'C': printf("%c%s ",a[i].num,club);
            break;
            case 'D': printf("%c%s ",a[i].num,diamond);
            break;
            case 'H': printf("%c%s ",a[i].num,heart);
            break;
            case 'S': printf("%c%s ",a[i].num,spade);
            break;
        }
        i++;
    }
  

  





  return 1;
}
