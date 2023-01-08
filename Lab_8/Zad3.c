#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct osoba{
    char imie[20];
    char nazwisko[30];
};
struct osoba tab[70];

void znajdz(struct osoba n){
    int l=0;
    for(int i=0;i<70;i++){
        if(strcmp(n.imie,tab[i].imie)==0&&strcmp(n.nazwisko,tab[i].nazwisko)==0){
            printf("Podane imie i nazwisko znajduja sie juz w pliku!\n");
            l++;
        }
    }
    if(l==0){
        printf("Podane imie i nazwisko nie znajduja sie w pliku!\n");
    }
}

int main(){
    struct osoba nazwa;
    FILE *baza;
    baza=fopen("baza.txt", "r");
    printf("Podaj dowolne imie i nazwisko\n");
    scanf("%s %s", nazwa.imie, nazwa.nazwisko);
    for(int i=0;i<70;i++){
        fscanf(baza,"%s %s", tab[i].imie, tab[i].nazwisko);
    }
    znajdz(nazwa);

    fclose(baza);
}
