//created by Ahmad Mostafa
#include <stdio.h>
//to calculate days in months
int daystomonth(int x){
    int monthDays[12] = {31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31 };
    int days=0;
    for(int i=0;i<x-1;i++)
        days+=monthDays[i];
    return days;
}
//to determine if a year is leap or not
int isleap(int x){
    int flag = 0;
    if(( (x%4==0) && (x%100!=0 ))||(x%400==0) )
        flag=1;
    return flag;
}
//to calculate the days in years
int daysinyears(int year1,int year2){
    int leap=0;
    for(int i=year1 ;i <= year2 ; i++)
        if(isleap(i))
            leap++;
    return 365*(year2-year1)+leap;
}
//to calculate a date difference in days
int diff(int date1[],int date2[]){
    return daysinyears(date2[2],date1[2])+
    daystomonth(date1[1])-  daystomonth(date2[1])
    +date1[0]            -  date2[0]
    -2;
}
int main(void){
    int date1[3]={9,1,2020};
    int date2[3]={16,10,2000};

    printf("%d",diff(date1,date2));
}