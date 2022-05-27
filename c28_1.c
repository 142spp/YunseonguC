#include <stdio.h>

typedef struct books{
    char creator[100];
    char title[100];
    int page;
} books;

void cleanLineFromReadBuffer(void){
    while(getchar()!='\n');
}

int main(){
    books book[3];
    for(int i=0; i<3; i++){
        
        printf("creator : ");
        fgets(book[i].creator,100,stdin);
        cleanLineFromReadBuffer();
        printf("title : ");
        fgets(book[i].title,100,stdin);
        cleanLineFromReadBuffer();
        printf("page : ");
        scanf("%d",&book[i].page);
        cleanLineFromReadBuffer();
    }

    for(int i=0; i<3; i++){
    printf("creator : %s\n",
    book[i].creator);
    printf("title : %s\n",
    book[i].title);
    printf("page : %d\n",
    book[i].page);
    }
}