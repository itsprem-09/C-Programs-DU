#include<stdio.h>
void main(){
    int a,b,c,temp;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    if(b<c){
        temp=b;
        b=c;
        c=temp;
    }
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    printf("Decending Order of Given Number is:");
    printf("\n %d",a);
    printf("\n %d",b);
    printf("\n %d",c);
}