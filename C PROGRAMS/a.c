#include <stdio.h>
void main()
{
    float sec, hour, min, second, days, months, years, century;
    printf("Enter Secoud:");
    scanf("%f", &sec);
    century = sec / 3153600000;
    years = (sec - (century * 3153600000)) / 31536000;
    months = (sec - (century * 3153600000) - (years * 31536000)) / 2630000;
    days = (sec - (century * 3153600000) - (years * 31536000) - (months * 2630000)) / 86400;
    hour = (sec - (century * 3153600000) - (years * 31536000) - (months * 2630000) - (days * 86400)) / 3600;
    min = ((sec - (century * 3153600000) - (years * 31536000) - (months * 2630000) - (days * 86400) - (hour * 3600)) / 60);
    second = ((sec - (century * 3153600000) - (years * 31536000) - (months * 2630000) - (days * 86400) - (hour * 3600) - (min * 60)));
    printf("Century: %f", century);
    printf("Years: %f", years);
    printf("Months:%f", months);
    printf("\nDays:%f", days);
    printf("\nHH:MM:SS %f : %f : %f", hour, min, second);
}