#include<stdio.h>
void main(){
    int base,power,ans=1,i=1;
    printf("Enter the Base Number:");
    scanf("%d",&base);
    printf("Enter the Power of Number:");
    scanf("%d",&power);
    while (i<=power)
    {
        ans=base*ans;
        i++;
    }
    printf("\nAns is:%d",ans);    
}