#include <stdio.h>

int main(void){
    char arr[100],len_arr,arr_rev[100];
    printf("input string : ");
    scanf("%s",arr);
    for(int i=0; 1; i++){
        if(arr[i]==0){
            printf("%d \n",i);
            len_arr=i;
            break;
        }
    }  

    for(int i=0; i<len_arr; i++){
        arr_rev[i]=arr[len_arr-i-1];
    }

    arr_rev[len_arr]='\0';

    printf("%s",arr_rev);

    return 0;
}