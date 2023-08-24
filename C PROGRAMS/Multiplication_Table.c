#include<stdio.h>
void main(){
    int num,i=1,ans;
    printf("Enter the Number:");
    scanf("%d",&num);
    while (i<=10)
    {
        ans=i*num;
        printf("\n%d * %d",num,i);
        printf("\t=%d",ans);
        i++;
    }
}