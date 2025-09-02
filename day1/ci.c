#include <stdio.h>
#include <math.h>
int main(){
    // ci calculation
    float amount,rate,time,principal,ci;
    printf("enter principal,rate and time ");
    scanf("%f%f%f",&principal,&rate,&time);
    amount=principal*(pow(1+(rate/100),time));
    ci=amount-principal;
    printf("ci = %f",ci);
    return 0;

}
