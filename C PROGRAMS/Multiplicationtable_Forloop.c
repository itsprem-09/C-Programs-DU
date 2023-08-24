#include<stdio.h>
void main(){
    int n,i=1,ans;
    printf("Enter the Number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("\n%d * %d",n,i);
        printf("\t= %d",n*i);
    }
}