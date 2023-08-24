#include<stdio.h>
void main(){
    int a=100,b=200;
    while (a<=b)
    {
        if (a%7==0&&a%5!=0)
        {
            printf("\n%d",a);
            a++;
        }
        else
        {
            a++;
        }
        
    }
}