#include <stdio.h>
#include <conio.h>
int main()
{
    //write a program to calculate 5 subject marks and percentage
    float s1,s2,s3,s4,s5,total,percent;

    printf("enter all 5 subject marks : ");

    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);

    total=s1+s2+s3+s4+s5;

    percent=(total*100)/500;

    printf("total marks obtains out of 500 \nmarks = %.1f \npercentage =%.1f %%",total,percent);



    return 0;
}
