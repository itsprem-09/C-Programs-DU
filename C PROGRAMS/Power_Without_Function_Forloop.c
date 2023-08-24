#include<stdio.h>
void main(){
    int base,power,ans=0,i;
    printf("Enter the Base:");
    scanf("%d",&base);
    printf("Enter the Power:");
    scanf("%d",&power);
    for(i=1;i<=power;i++)
    {
        ans=base+base+ans;
    }
    printf("Ans is:%d",ans);
}