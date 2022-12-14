#include<stdio.h>


int bin2dec(char s[]){
    int power = 1,sum = 0;

    for(int i = 7; i >= 1; i--){
        sum += power*(s[i] - '0');
        power *= 2;
    }

    //sum stores the unsigned value of n-1 digits
    if(s[0] == '0') return sum;

    else{
        power *= 2;
        sum -= power;
        return sum;
    } 

}


void add(char a[],char b[],char c[]){

    for(int i = 7; i >= 0 ; i--){
        switch(a[i] - '0' + b[i] - '0'){
            case 0 : c[i] = '0';
            break;
            case 1 : c[i] = '1';
            break;
            case 2 : c[i] = '0';
            if(i > 0)   a[i - 1] += 1;
            break;
            case 3: c[i] = '1';
            if(i > 0)   a[i - 1] += 1;
            break; 
        }
    }
    c[8] = '\0';

}





int main()
{
    char a[9],b[9],c[9];
    printf("Enter the number 1 and number 2 in 2's complement form:");
    scanf("%s %s",a,b);
    printf("Number 1 = %d\nNumber 2 = %d\n",bin2dec(a),bin2dec(b));

    add(a,b,c);
    printf("Sum in 2's complement form = %s\n",c);
    printf("Sum = %d\n",bin2dec(c));


    return 0;
}