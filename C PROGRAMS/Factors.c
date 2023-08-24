#include<stdio.h>
void main(){
    int num,i=1;
    printf("Enter the Number:");
    scanf("%d",&num);
    printf("Factors of Given Number:\n");
    while (i<=num)
    {
        if (num%i==0)
        {
            printf("\t%d",i);
            i++;
        }
        else
        {
            i++;
        }
    }
}