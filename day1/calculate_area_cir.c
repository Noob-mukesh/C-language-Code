// calculate area and circumference code in c 
#include <stdio.h>

int main()
{
    
    float radius,circum,area;
    printf("enter radius of circle in cm:\t");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    circum=2*3.14*radius;
    printf("circumference of circle %.2f cm.\t",circum);
    printf("\narea of circle %.2f cm^2.\t",area);
    return 0;
}