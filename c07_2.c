#include <stdio.h>

int main(void) {
    int num1, num2=1;
    printf("input number : ");
    scanf("%d",&num1);
    while(num2<10) {
        printf("%d × %d = %d \n",num1, num2, num1*num2);
        num2++;
    }
    return 0;
}