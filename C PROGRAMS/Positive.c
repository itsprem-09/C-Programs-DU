#include <stdio.h>
void main()
{
    int a;
    printf("Enter the number:");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("Given number is Positive");
    }
    else if (a == 0)
    {
        printf("Given Number is Zero");
    }
    else
    {
    printf("Given Number is Negative");
    }
}