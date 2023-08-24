#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the Value of a:");
    scanf("%d",&a);
    printf("Enter the Value of b:");
    scanf("%d",&b);
    printf("Enter the Value of c:");
    scanf("%d",&c);
    if (a>b&&a>c)
    {
        if (b>c)
        {
            printf("b is secound largest Number:%d",b);
        }
        else{
             printf("c is secound largest Number:%d",c);
        }
        
    }
    else if (b>a&&b>c)
    {
        if (a>c)
        {
            printf("a is secound largest Number:%d",a);
        }
        else{
             printf("c is secound largest Number:%d",c);
        }
    }
    else
    {
        if (a>b)
        {
            printf("a is secound largest Number:%d",a);
        }
        else{
             printf("b is secound largest Number:%d",b);
        }
    }    
}