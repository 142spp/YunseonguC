#include <stdio.h>

int main(void){
    int n; 
    int j=0;
    int arr[16];
    
    printf("Enter a Demical number : ");
    scanf("%d",&n);
    for(int i=0; 1; i++){
        arr[i]=n%2;
        n=n/2;
        
        if(n==0)
            break;
        j++;
        
    }
    for(int i=j; i>=0; i--){
        printf("%d ",arr[i]);
    }
}