#include<stdio.h>
void main(){
    int a=1,sum=0,n;
    printf("Enter the Number of Term:");
    scanf("%d",&n);
    while (a<=(1+((n-1)*3)))
    {
        printf("+%d",a);
        sum=sum+a;
        a=a+3;
    }
    //sum=((0.5*n)*(2+((n-1)*3)));
    printf("\nSum of this Fibonacci Series is:%d",sum);
}