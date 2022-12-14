#include<stdio.h>
int main(){
int n,day,month,year,no_of_days;
printf("Enter date:");
scanf("%d",&n);
year=n%10000;
n=n/10000;
month=n%100;
n=n/100;
day=n;
printf("Day: %d\n",day);
printf("Month: %d\n",month);
printf("Year: %d\n",year);
if(year<2021){
    printf("Before 2021\n");
    return 0;
}
if(year>2099){
    printf("After 2099\n");
    return 0;
}
if(month<1||month>12){
    printf("Month out of range");
    return 0;
}
if(day<1||day>31){
    printf("Day out of range");
    return 0;
}
if((month==4||month==6||month==9||month==11)&&(day>30)){
    printf("Day out of range");
    return 0;
}
if(month==2&&day>=29-!(year/4==0)){
    printf("Month out of range");
    return 0;
}

no_of_days=(year-2021)*365+(year-2021);
switch(month){
case 12: no_of_days+=30;
case 11:no_of_days+=31;
case 10:no_of_days+=30;
case 9:no_of_days+=31;
case 8:no_of_days+=31;
case 7:no_of_days+=30;
case 6:no_of_days+=31;
case 5:no_of_days+=30;
case 4:no_of_days+=31;
case 3:no_of_days+=28+(!(year%4));;
case 2:no_of_days+=31;


}
no_of_days+=day;
switch((no_of_days-1)%7){
    
    case 0: printf("It's a Friday of "); break;
    case 1: printf("It's a Saturday of "); break;
    case 2: printf("It's a Sunday of "); break;
    case 3: printf("It's a Monday of "); break;
    case 4: printf("It's a Tuesday of "); break;
    case 5: printf("It's a Wednesday of "); break;
    case 6: printf("It's a Thursday of "); break;
}




















return 0;
}