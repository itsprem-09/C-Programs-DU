#include<stdio.h>
void main(){
    int n,i=1;
    printf("Enter the Number");
    scanf("%d",&n);
    do{
        printf("\n%d",i);
        i++;
    }while(i<=n);
}