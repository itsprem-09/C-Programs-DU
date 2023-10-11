#include<stdio.h>
void main(){
    char a[100],b[100];
    int i,strlna=0,strlnb=0,count=0;
    printf("Enter the First String:");
    gets(a);
    printf("Enter the Secound String:");
    gets(b);
    for ( i = 0; a[i] != '\0'; i++)
    {
        strlna++;
    }
    for ( i = 0; b[i] != '\0'; i++)
    {
        strlnb++;
    }
    if (strlna==strlnb)
    {
        for ( i = 0; i < strlna; i++)
        {
            if (a[i]!=b[i])
            {
                count=1;
                break;
            }    
        }    
    }
    if (count==1)
    {
        printf("Both Given Strings are Not Same.");
    }
    else if (strlna!=strlnb)
    {
        printf("Both Given Strings are Not Same.");
    }
    else
    {
        printf("Both Given Strings are Same.");
    }    
}