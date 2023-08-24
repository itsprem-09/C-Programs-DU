#include<stdio.h>
void main(){
    int a,b;
    printf("Eneter the First Number:");
    scanf("%d",&a);
    printf("Eneter the Secound Number:");
    scanf("%d",&b);
    while (a<=b)
    {
       if(a%2==0){
        printf("\n%d",a);
        a++;
       }
       else{
        a++;
       }
    }
}