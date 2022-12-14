//Aditya Rai
//21AG30002

#include<stdio.h>
double check(int x1,int y1,int x2,int y2,int x,int y );
int main(){
    int n,x[100],y[100],i,j,t=0,flag=0;
    printf("How many vertices?");
    scanf("%d",&n);
    printf("Enter X and Y co-ordinates:\n");
    for(i=0;i<=n-1;i++){
        scanf("%d%d",&x[i],&y[i]);
    }
    i=0;
    for(i=0;i<=n-1;i++){
        for(j=0;j<n;j++){
            for(int k=0;k<n&&k!=i&&k!=j;k++){
                for(int f=0;f<n&&f!=k&&f!=k-1&&f!=k+1;f++){
                    if(j!=i&&j!=i-1&&j!=i+1){
                        if(check(x[i],y[i],x[j],y[j],x[k],y[k])*check(x[i],y[i],x[j],y[j],x[f],y[f])<=0){
                            printf("Yes");
                            flag=1;
                            t++;
                        }
                    }
                }
            }
        }
    }
    if(flag==0){
        printf("Polygon is a simple polygon");
    }
    else{
    printf("Polygon is not a simple polygon.\n");
    printf("Number of intersecting pairs of non adjacent sides is %d",t);    
    }
    


return 0;
}

double check(int x1,int y1,int x2,int y2,int x,int y ){
    return ((x2-x1)*(y-y1)-(y2-y1)*(x-x1));
}