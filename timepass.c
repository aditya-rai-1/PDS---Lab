#include<stdio.h>
int main(){
int x1,y1,x2,y2,x,y,t;
printf("Enter (x,y) coordinates of Point p:");
scanf("%d%d",&x1,&y1);
printf("Enter (x,y) coordinates of Point q:");
scanf("%d%d",&x2,&y2);
if(x1>x2){
    t=x1;
    x1=x2;
    x2=t;
    t=y1;
    y1=y2;
    y2=t;
}
t=0;
printf("Integer points on the line segment pq:\n");
for( x=x1;x<=x2;x++){
    
    for(y=y1;y<=y2;y++){
       if(((x2-x1)*(y-y1))==((y2-y1)*(x-x1))){
           t++;
           printf("%d. (%d,%d)\n",t,x,y);
           break;

       }

    }

}
printf(" Number of integer points on the line segment pq=%d",t);



return 0;
}