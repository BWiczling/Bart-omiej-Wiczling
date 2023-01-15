#include <stdio.h>


struct dane_kontaktowe{
    char imie[15];
    char nazwisko[20];
    char nr_tel[9];
};


int main(){
    struct dane_kontaktowe dane[3];
    printf("Podaj imie nazwisko i numer telefonu trzech osob:\n");
    for(int i=0;i<3;i++){
        printf("Osoba %d\nImie:\n", i+1);
        scanf(" %s", dane[i].imie);
        printf("Nazwisko:\n");
        scanf(" %s", dane[i].nazwisko);
        printf("Numer telefonu:\n");
        scanf(" %s", dane[i].nr_tel);
        printf("\n");
    }
    printf("Te osoby to:\n");
    for(int i=0;i<3;i++){
        printf("%s", dane[i].imie);
        printf(" %s", dane[i].nazwisko);
        printf(" %s", dane[i].nr_tel);
        printf("\n");
    }
}