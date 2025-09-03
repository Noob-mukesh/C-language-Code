
#include <stdio.h>

int main() {
    // multiplication table using for loop
    int number;
    printf("enter number : ");
    scanf("%d",&number);
    printf("table of %d\n",number);
    for (int i=1;i<=10;i++){
        printf("%d*%d=%d\n",number,i,i*number);
    }
    return 0;
}
