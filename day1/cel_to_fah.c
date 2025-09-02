// celsius to fahernheit
#include <stdio.h>
int main(){
    float cel,fah;
    // setlocale(LC_ALL, "");
    printf("enter temperature is celsius : ");
    scanf("%f",&cel);
    fah=(cel*9/5)+32;
    printf("temperature in fahrenheit = %.2f F\n",fah);
    
    return 0;

}