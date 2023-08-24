#include<stdio.h>
void main(){
    int d,week,year,days;
    printf("Enter Days:");
    scanf("%d",&d);
    year=d/365;
    week=(d%365)/7;
    days=(d-(year*365+week*7));
    printf("YY:WW:DD %d:%d:%d",year,week,days);
}