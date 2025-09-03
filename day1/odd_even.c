// odd even checker
#include <stdio.h>

int main() {
    // Write C code here
   int num;
   printf("enter any number to check even or odd: ");
   scanf("%d",&num);
   if(num%2==0)
   {
       printf("%d is even",num);
      
   }
   else{
       printf("%d is odd",num);
   }
    return 0;
}
