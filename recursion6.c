#include<stdio.h>
void permute(int i,int sum,int c,int d);
int main(){
    int c,d;

    printf("Enter two digits:");
    scanf("%d %d",&c,&d);
    printf("Numbers:\n");
    permute(0,0,c,d);
return 0;
}

void permute(int i,int sum,int c,int d){
    int ans1[6],ans2[6];
    if(sum>4*c+d+5) return;
    else{
        if(i==6){
            for(int j=0;j<=i;j++){
                printf("%d",ans1[i]);
            } 
            printf(" ");
            for(int j=0;j<=i;j++){
                printf("%d",ans2[i]);
            } 
            printf(" ");
            return;
        }
        else{
            ans1[i]=c;
            ans2[i]=d;
            permute(i+1,sum+c,c,d);
            
            permute(i+1,sum+d,c,d);
        }

    }

}