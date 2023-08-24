#include<stdio.h>
#include<math.h>
void main(){
    int i=0;
    float squareroot;
    while (i<=9)
    {
        printf("\nNumber is:%d",i);
        squareroot=sqrt(i);
        printf("\nSquareroot of Number is:%f",squareroot);
        i++;
    }
}