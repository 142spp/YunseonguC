#include <stdio.h>

int main(void){
    int arr[2][4]={{1,2,3,4},{5,6,7,8}};
    int brr[4][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            brr[j][i]=arr[i][j];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
}