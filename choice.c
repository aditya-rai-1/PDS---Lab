#include<stdio.h>
void generate_choice(int input[],int output[],int index,int size);
int main(){
    int input[100],output[100]={0},n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&input[i]);
    generate_choice(input,output,0,n);

    
return 0;
}

void generate_choice(int input[],int output[],int index,int size){
    if(index>=size){
        for(int i=0;i<size;i++){
            if(output[i]==0){
                printf(" ");
                continue;
            } 
            printf("%d",output[i]);
        }
        printf("\n");
        return;
    }
    else{
        generate_choice(input,output,index+1,size);   //exclude
        output[index]=input[index];
        generate_choice(input,output,index+1,size);   //include
        return; 

    }

}