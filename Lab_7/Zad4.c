#include<stdio.h>

int najwiekszy (int tab[], int rozmiar){
    int max=*tab;
    for(int i=0;i<rozmiar;i++){
        if(max<*(tab+i)){
            max=*(tab+i);
        }
    }
    for(int i=0;i<rozmiar;i++){
        if(max==*(tab+i)){
            *(tab+i)=0;
        }
    }
    return max;
}

int main(){
    int tab[5]={1,5,2,3,4};
    printf("Elementy tablicy przed funkcja: \n");
    for(int i=0;i<5;i++){
        printf("%d ", *(tab+i));
    }
    printf("\nNajwiekszy element tablicy to: %d\n", najwiekszy(tab,5));
    printf("Elementy tablicy po funkcji: \n");
    for(int i=0;i<5;i++){
        printf("%d ", *(tab+i));
    }
}