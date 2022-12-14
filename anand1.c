#include <stdio.h>


int main()
{
    
    for(int i = 1; i <= 1000 ; i++){
        int t = i,sum = 0;
        while(t != 0){
            sum += (t%10)*(t%10)*(t%10);
            t /= 10;
        }
        if(sum == i) printf("Armstrong Number is %d\n",i);
    }

    return 0;
}