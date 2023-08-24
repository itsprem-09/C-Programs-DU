// METHOD-1
#include<stdio.h>
void main(){
    int sec,hour,min,second;
        printf("Enter Secoud:");
        scanf("%d",&sec);
        hour=sec/3600;
        min=((sec-(hour*3600))/60);
        second=((sec-(hour*3600)-(min*60)));
        printf("HH:MM:SS %d : %d : %d",hour,min,second);
}

// METHOD-2
/*
#include<stdio.h>
void main(){
    int sec,min,hour;
    printf("Enter Seconds:");
    scanf("%d",&sec);
    min=sec/60;
    sec=sec%60;
    hour=min/60;
    min=min%60;
    printf("HH:%d",hour);
    printf("\nMM:%d",min);
    printf("\nSS:%d",sec);
}
*/