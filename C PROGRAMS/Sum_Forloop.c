#include<stdio.h>
void main(){
    int n,ans=0,i;
    printf("Enter the Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("+%d",i);
        ans=ans+i;
    }
    printf("\nAns is:%d",ans);
}