#include<stdio.h>
#include<math.h>
struct point{
    int x;
    int y;
};
float distance_(struct point point_1,struct point point_2);


int main(){
    struct point point_1,point_2;
    printf("Enter (x,y) of first point:");
    scanf("%d%d",point_1.x,point_1.y);
    printf("Enter (x,y) of second point:");
    scanf("%d%d",point_2.x,point_2.y);
    printf("Distance=%.3f",distance_(point_1,point_2));



    return 0;


}

float distance_(struct point point_1,struct point point_2){
    float distance;
    distance= ((point_1.x-point_2.x)*(point_1.x-point_2.x) + (point_1.y-point_2.y)*(point_1.y-point_2.y));
    distance=sqrt(distance);
    return distance;
} 