#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int x1,y1,x2,y2;
}rect;

int check( rect a,int x,int y);

int main()
{   
    int n,i;
    char s[54][54];
    rect *p;
    printf("Enter #rectangles:");
    scanf("%d",&n);
    p = (rect *) malloc (n * sizeof(rect));
    printf("Enter BOTTOM-LEFT and TOP-RIGHT coordinates (values: 1 to 54):\n");
    for(i=0;i<n;i++){
        scanf("%d %d %d %d",&p[i].x1,&p[i].y1,&p[i].x2,&p[i].y2);
    }

    for(int i=53;i>=0;i--){
        for(int j=0;j<54;j++){
            int flag=0;
            for(int k=0;k<n;k++){
                if(check(p[k],54 - i,j+1) ==1 ){
                    flag =1;
                    break; 
                }
            }
            if(flag==1) s[i][j] = ' ';
            else s[i][j] = '6';
        }
    }
    printf("\n\n");

    for(int i=0;i<54;i++){
        for(int j=53;j>=0;j--){
            printf("%c",s[i][j]);
        }
        printf("\n");
    }








    return 0;
}

int check( rect a,int x,int y){
    if(((x>=a.x1 && x<=a.x2)||(x<=a.x1 && x>=a.x2)) && ((y>=a.y1 && y<=a.y2)||(y>=a.y1 && y<=a.y2))) return 1;
    else return 0;
}