#include <stdio.h>

int main(void){
    int arr[10];
    int odd[10];
    int even[10];
    int odd_len=0, even_len=0;
    for(int i=0; i<10; i++){
        printf("Enter the number : ");
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<10; i++){
        if(arr[i]%2==0){
            even[even_len]=arr[i];
            even_len+=1;
        } else{
            odd[odd_len]=arr[i];
            odd_len+=1;
        }
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<even_len; j++){
            if(even[j]>even[j+1]){
                int temp;
                temp=even[j];
                even[j]=even[j+1];
                even[j+1]=temp;
            }
        }
        for(int k=0; k<odd_len; k++){
            if(odd[k]>odd[k+1]){
                int temp;
                temp=odd[k];
                odd[k]=odd[k+1];
                odd[k+1]=temp;
            }
        }
    }

    for(int i=0; i<odd_len; i++){
        arr[i]=odd[i];
    }

    for(int i=0; i<even_len; i++){
        arr[i+odd_len]=even[i];
    }

    for(int i=0; i<10; i++){
        printf("%d ",arr[i]);
    }
}