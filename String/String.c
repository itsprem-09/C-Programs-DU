#include<stdio.h>
void main(){
    char a[100];
    int i,uppercase=0,lowercase=0,special=0,digit=0;
    printf("Enter the String:");
    gets(a);
    for ( i = 0; a[i] != '\0'; i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            lowercase++;
        }
        else if (a[i]>='A' && a[i]<='Z')
        {
            uppercase++;
        }
        else if (a[i]>='0' && a[i]<='9')
        {
            digit++;
        }
        else
        {
            special++;
        }    
    }
    printf("\nLowercase: %d",lowercase);
    printf("\nUppercase: %d",uppercase);    
    printf("\nDigit: %d",digit);    
    printf("\nSpecial Character: %d",special);    
}