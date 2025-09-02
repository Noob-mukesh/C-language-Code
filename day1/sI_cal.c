#include <stdio.h>
int main(){

    float p,r,t,si;
    printf("enter value of princpal,rate,time: ");
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("Simple intrest=%.2f",si);
    return 0;

}