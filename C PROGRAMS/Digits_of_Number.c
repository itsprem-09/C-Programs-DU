#include<stdio.h>
void main(){
    int num,ans;
    printf("Enter the Number:");
    scanf("%d",&num);
    while (num>0)
    {
        ans=num%10;
        num=num/10;
        printf("\n%d",ans);
    }
}