#include <stdio.h>

float divide(int,int);

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("a / b == %f\n", divide(a,b) );
    return 0;
}

float divide(int x, int y)
{
    return (float)x/y;
}