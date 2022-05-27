#include <stdio.h>

void printarr(int (*arr)[4]){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void turnarr(int (*arr)[4]){
    int arr_temp[4][4];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            arr_temp[j][3-i]=arr[i][j];
        }
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            arr[i][j]=arr_temp[i][j];
        }
    }
}

int main(void){
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int arr_temp[4][4];

    for(int i=0; i<3; i++){
    turnarr(arr);
    printarr(arr);
    printf("\n");
    }

    return 0;
}