#include<stdio.h>
  int check(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4){
  float s,t;
  int r;
  s = (((float)x4-x2)*(y1-y2)-(y4-y2)*(x1-x2))/((x4-x3)*(y1-y2)-(y4-y3)*(x1-x2));
  t = (((float)x2-x4)*(y3-y4)-(y2-y4)*(x3-x4))/((x2-x1)*(y3-y4)-(y2-y1)*(x3-x4));
  r = ((s>0)&&(s<1)&&(t>0)&&(t<1));
  return r;
  }


  int main(){
  int a[800], n, i, s, r,count = 0;
  printf("How many vertices? ");
  scanf("%d",&n);
  printf("Enter X and Y co-ordinates:\n");
  for(i=0; i<2*n; i+=2)
    scanf("%d%d",&a[i],&a[i+1]);
  for(i=0 ; i<n; ++i){
    for (s=i+2; s<=n+i-2; ++s){
        r = check(a[2*i],a[2*i+1],a[2*(i+1)],a[2*(i+1)+1],a[2*(s%n)],a[2*(s%n)+1],a[2*((s%n)+1)],a[2*((s%n)+1)+1]);
        if (r!=0)
            ++count;
    }
  }
  if(count==0)
    printf("Polygon is a simple polygon.");
  else{
    printf("Polygon is a not simple polygon.\n");
    printf("Number of intersecting pairs of non-adjacent sides is %d",count/2);
  }
  return 0;
  }