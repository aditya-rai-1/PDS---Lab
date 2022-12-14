#include<stdio.h>
#include<math.h>


typedef struct {
    int x;
    int y;
}point;
 typedef struct {
     point v[3];
 }triangle;

double distance_(point point1,point point2);
double calArea(triangle t);
int check(triangle t,point p);

#define E 0.001


int main()
{   triangle T[9];
    int n;
    printf("Enter #triangles: ");
    scanf("%d",&n);
    printf("Enter the triangle coordinates:\n ");
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d %d",&T[i].v[j].x,&T[i].v[j].y);
        }
    }

    for(int i=0;i<n;i++){
        for(int x=0;x<41;x++){
            for(int y=40;y>=0;y--){
                point P;
                P.x=x;
                P.y=y;
                int result=check(T[i],P);
                if(result==0) printf(" ");
                else {
                    printf("%d",i+1);
                }


            }
            printf("\n");
        }
    }
return 0;
}

double calArea(triangle t){
    double a=distance_(t.v[0],t.v[1]);
    double b=distance_(t.v[1],t.v[2]);
    double c=distance_(t.v[0],t.v[2]);
    double s=(a+b+c)/2;
    double area = s*(s-a)*(s-b)*(s-c);
    area= sqrt(area);

    return area;
}

double distance_(point point1,point point2){
    double d=(point1.x-point2.x)*(point1.x-point2.x) + (point1.y-point2.y)*(point1.y-point2.y);
    d=sqrt(d);
    return d;

}

int check(triangle t,point p){
    triangle ref=t;
    double A= calArea(t);
    ref.v[0]=p;
    double S= calArea(ref);
    ref =t;
    ref.v[1]=p;
    S+= calArea(ref);
    ref=t;
    ref.v[2]=p;
    S+= calArea(ref);
    if( A>= S-E&& A<= S+E) return 1;
    else return 0;
}