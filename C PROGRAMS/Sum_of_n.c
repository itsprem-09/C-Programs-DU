#include<stdio.h>
void main(){
    int a,sum=0,i=1;
    printf("Enter the Number:");
    scanf("%d",&a);
    while (i<=a)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum is:%d",sum);
}