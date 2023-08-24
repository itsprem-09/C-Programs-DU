#include<stdio.h>
void main(){
    int i=1,n;
    printf("Enter the Number:");
    scanf("%d",&n);
    while (i<=n)
    {
        if(i%2==0){
            printf("\n%d",i);
            i++;
        }
        else{
            i++;
        }
    }
    
}