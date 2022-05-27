#include <stdio.h>

int main(void){
    int arr[5][5];


    
    for(int i=0; i<4; i++){
        int sum_row=0;
        for(int j=0; j<4; j++){
            printf("Enter the score : ");
            scanf("%d", &arr[i][j]);
            sum_row+=arr[i][j];
        }
        arr[i][4]=sum_row;
    }

    for(int i=0; i<5; i++){
        int sum_col=0;
        for(int j=0; j<4; j++){
            sum_col+=arr[j][i];
        }
        arr[4][i]=sum_col;
    }
 
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}