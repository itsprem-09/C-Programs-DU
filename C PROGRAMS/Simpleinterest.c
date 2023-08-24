#include<stdio.h>
// roi==rate of interest 
// tp==time period
void main(){
    int principal;
    float roi,tp;
    printf("Enter Ammount:");
    scanf("%d",&principal);
    printf("Enter Rate of Interest:");
    scanf("%f",&roi);
    printf("Enter Time Period:");
    scanf("%f",&tp);
    printf("Simple Interest of given ammount is:%f",(principal*roi*tp)/(float)100);
}