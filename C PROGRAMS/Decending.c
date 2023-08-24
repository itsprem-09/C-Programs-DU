#include<stdio.h>
void main(){
    int a=10,b=60,c=8,temp;
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
    printf("\n %d",a);
    printf("\n %d",b);
    printf("\n %d",c);
}