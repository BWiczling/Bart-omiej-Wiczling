#include <stdio.h>

char ita(char s[], int i){
    char i_ty=s[i];
    return i_ty;
}

int main(){
    char napis[255];
    printf("Podaj jakis napis: \n");
    scanf("%s", napis);
    int ktory_znak, koniec_napisu=0;
    for(int i=0;i<255;i++){
        if(napis[i]=='\0'){
            break;
        }
        else{
            koniec_napisu++;
        }
    }
    printf("Podaj ktory znak z napisu ma zwrocic funkcja:\n");
    scanf("%d", &ktory_znak);
    while(ktory_znak<1||ktory_znak>koniec_napisu){
        printf("Podana liczba nie jest z zakresu dlugosci wyrazu, prosze podac liczbe jeszcze raz:\n");
        scanf("%d", &ktory_znak);
    }
    printf("Twoj znak to:\n%c\n", ita(napis, ktory_znak-1));
    return 0;
}