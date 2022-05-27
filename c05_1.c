#include <stdio.h>

int main(void){
    int n1,n2,n3,n4;
    printf("left up x,y : ");
    scanf("%d %d",&n1,&n2);
    printf("right down x,y : ");
    scanf("%d %d",&n3,&n4);

    printf("area : %d", (n3-n1)*(n4-n2));
}