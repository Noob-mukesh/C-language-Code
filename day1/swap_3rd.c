#include <stdio.h>
int main(){
    int a,b,temp;
    printf("enter both numbers : ");
    scanf("%i%i",&a,&b);
    printf("before swapping  a=%i and b=%i\n",a,b);
    temp=b;
    b=a;
    a=temp;
    printf("after swapping  a=%i and b=%i",a,b);
    return 0;
}