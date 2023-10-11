#include<stdio.h>
#include<string.h>
void main(){
    char a[100],b[100];
    int i,count=0;
    printf("Enter String1: ");
    gets(a);
    printf("Enter String2: ");
    gets(b);
    for ( i = 0; a[i]!='\0' ; i++)
    {
    
    }
    a[i]=' ';
    i++;
    for (int j = 0;  b[j]!='\0'; j++)
    {
        a[i]=b[j];
        i++;
    }
    a[i]='\0';
    printf("%s",a);
}