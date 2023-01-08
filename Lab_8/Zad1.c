#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int najmniejsza(int tab[], int rozmiar){
    int najmn=tab[0];
    for(int i=0;i<rozmiar;i++){
        if(tab[i]<najmn){
            najmn=tab[i];
        }
    }
    return najmn;
}

int najwieksza(int tab[], int rozmiar){
    int najw=tab[0];
    for(int i=0;i<rozmiar;i++){
        if(tab[i]>najw){
            najw=tab[i];
        }
    }
    return najw;
}


int main(){
    int tab[100];
    FILE *dane;
    dane=fopen("liczby.txt","r");
    for(int i=0;i<100;i++){
        fscanf(dane,"%d\n", &tab[i]);
    }
    for(int i=0;i<100;i++){
        printf("%d\n", tab[i]);
    }
    fclose(dane);
    printf("Najmniejsza liczba z pliku to: %d\n", najmniejsza(tab,100));
    printf("Najwieksza liczba z pliku to: %d\n", najwieksza(tab,100));
}