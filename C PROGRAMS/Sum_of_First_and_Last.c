#include<stdio.h>
void main(){
    int num,fd,ld;
    printf("Enter the Number:");
    scanf("%d",&num);
    ld=num%10;
    while (num>=10)
    {
        num=num/10;
    }
    fd=num;
    printf("Ans is:%d",fd+ld);
}