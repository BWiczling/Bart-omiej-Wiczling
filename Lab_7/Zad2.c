#include<stdio.h>

int main(){
    int tab[10];
    printf("Podaj 10 elementow tablicy.\n");
    for(int i=0;i<10;i++){
        scanf("%d", tab+i);
    }
    printf("Elementy tablicy: \n");
    for(int i=0;i<10;i++){
        printf("%d ", *(tab+i));
    }
}