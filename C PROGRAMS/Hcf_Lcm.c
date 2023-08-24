#include<stdio.h>
void main(){
    int n1,n2,i=1,ans;
    printf("Enter the First Number:");
    scanf("%d",&n1);
    printf("Enter the Secound Number:");
    scanf("%d",&n2);
    while ((i<=n1)&&(i<=n2))
    {
        if ((n1%i==0) && (n2%i==0))
        {
            i++;
            ans=(i-1);
        }
        else
        {
            i++;
        }
    }
    printf("\nHCF: %d",ans);
}