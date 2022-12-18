#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n=0;       //rozmiar tablicy


void wypisz_tablice(char tab[]){
    if(n==0){
        printf("Blad! Tablica nie zawiera zadnych elementow!\n");
        return;
    }
    printf("Twoja tablica to:\n");
    for(int i=0;i<n;i++){
        printf("%c ", tab[i]);
    }
    printf("\n");
}

void miejsce(char tab[]){
    if(n<100){
        printf("Jest miejsce w tablicy\n");
        char l;
        printf("Podaj cyfre ktora chcesz wstawic na koniec tablicy:");
        scanf(" %c", &l);
        if(l>47&&l<58){
            printf("Podana cyfra zostanie dodana na koniec tablicy\n");
            n++;
            *(tab+n-1)=l;
        }
        else{
            printf("Podano nieprawidlowy znak\n");
        }

    }
    else{
        printf("Brak miejsca w tablicy\n");
    }
}

void usuwanie(char tab[]){
    int indeks;    
    if(n==0){
        printf("Blad! Tablica nie zawiera zadnych elementow!\n");
        return;
    }
    printf("Podaj indeks elementu do usuniecia: ");
    scanf("%d", &indeks);
    if(indeks<0 || indeks>n){
        printf("Brak podanego indeksu w tablicy\n");
        return;
    }
    printf("Pod podanym indeksem znajduje sie element: %c\nZostanie on usuniety z tablicy\n", *(tab+indeks));
    for(int i=indeks;i<n-1;i++){
        *(tab+i)=*(tab+i+1);
    }
    n--;
}


int suma(char tab[]){
    int s=0;
    if(n==0){
        return 0;
    }
    else{
        for(int i=0;i<n;i++){
            s=s+((int)tab[i]-(int)'0');
        }
    }
    return s;
}

int power(int a, int b){
    int p=a;
    for(int i=0;i<b;i++){
        p=p*a;
    }
    return p;
}


void drzewko(char tab[]){
    for(int i=0;i<n;i++){
        int p=power(2,i);
        for(int j=0;j<p-1;j++){
            for(int k=0;k<7-i;k++){
                printf(" ");
            }
            printf("%c", tab[j+i]);
        }
        printf("\n");
    }
}

int main(){
    char tab[100];
    int k;
    while(1){
        scanf("%d", &k);
        if(k==0){
            break;
        }
        switch(k){
            case 1:
                wypisz_tablice(tab);
                break;
            case 2:
                miejsce(tab);
                break;
            case 3:
                usuwanie(tab);
                break;
            case 4:
                if(suma(tab)==0&&n==0){
                    printf("Brak elementow w tablicy\n");
                }
                else{
                    printf("Suma elementow w tablicy to: %d\n", suma(tab));
                }
            case 5:
                drzewko(tab);
        }
    }
}