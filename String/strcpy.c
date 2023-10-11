#include<stdio.h>
#include<string.h>
void main(){
    char s1[100],s2[100],temp;
    int i;
    printf("Enter the First String:");
    gets(s1);
    printf("Enter the Secound String:");
    gets(s2);
    for (i = 0; s2[i]!='\0'; i++)
    {
        s1[i] = s2[i];
    }
    s1[i]='\0';
    printf("Modified:%s",s1);
}