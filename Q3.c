#include <stdio.h> 
int main(void)
{
    int i;
    int a[1]={2,9};

    for(i=0; i<3; i=i+1) {
        printf("%d\n", a[i]);
    }
    return 0;
}