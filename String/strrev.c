#include<stdio.h>
#include<string.h>
void main(){
    char a[100],temp;
    int i,length;
    printf("Enter the String:");
    gets(a);
    length=strlen(a);
    for ( i = 0; i <(length-1)/2; i++)
    {
        temp = a[i];
        a[i] = a[length-i-1];
        a[length-i-1] = temp;
    }
    printf("String in Reverse Order: %s",a);
}