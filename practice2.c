#include<stdio.h>
int main(){
    char players[]={'A','B','C','D'};
    char partners[4];
    for(int i=0;i<4;i++){
        printf("Hello %c,Enter your preferred partner:",players[i]);
        getch(partners[i]);
        
    }
    for(int i=0;i<4;i++)
    printf("%c ",partners[i]);
return 0;
}