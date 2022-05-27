#include <stdio.h> 
double square(double x) {
    printf("1 ");
    return x * x;
}
int main(void){
    int y;
    y=square(5);
    printf("%d",y);
    return 0;
}