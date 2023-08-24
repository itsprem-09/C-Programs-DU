#include<stdio.h>
void main(){
    int n,ans;
    printf("Enter the Number:");
    scanf("%d",&n);
    while (n>0)
    {
        ans=n%10;
        n=n/10;
        printf("%d",ans);
    }
}