#include <stdio.h> 
int main(void)
{
    int i;
    int a[3]={0,};

    for(i=0; i<3; i=i+1) {
        printf("%d\n", a[i]);
    }
    return 0;
}