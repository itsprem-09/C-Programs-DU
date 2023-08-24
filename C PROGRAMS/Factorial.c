#include<stdio.h>
void main(){
    int ans=1,n;
    printf("Enter the Number:");
    scanf("%d",&n);
    while (n>=1)
    {
        ans=ans*n;
        n--;
    }
    printf("Ans is:%d",ans);
}