#include<stdio.h>
void main(){
    float f;
    printf("Enter the temperature in degree Feranheat:");
    scanf("%f",&f);
    printf("Tempeture in Celcius=%f",((f-32)*5)/9);
}