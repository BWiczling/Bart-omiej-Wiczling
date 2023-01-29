#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "gry.h"

int main(){
    int a,s=0,l,k;
    printf("Witamy w programie gier logicznych\n");



    while(1){
        printf("Wybierz gre w ktora chcesz zagrac:\n");
        printf("1.Gra polegajaca na podawaniu liczb 1,2,3\n");
        printf("2.Gra polegajaca na rzucaniu kostka\n");
        scanf("%d", &a);
        if(a==3){
            break;
        }
        switch(a){
            case 1:
                printf("W tej grze gracz podaje liczby od 1 do 3. Nastepnie liczby te sa sumowane.\nWygrywa ten gracz ktory poda liczbe po ktorej suma wyniesie 30\n");
                while(1){
                    printf("Podaj liczbe 1,2,3\n");
                    scanf("%d", &l);
                    s=s+l;
                    printf("Suma liczb to: %d\n", s);
                    if(s==30){
                        printf("Wygrales!\n");
                        break;
                    }
                    k=losowanie_sum(s);
                    printf("Komputer wylosowal liczbe: %d\n", k);
                    s=s+k;
                    printf("Suma licz to: %d\n", s);
                    getchar();
                    if(s==30){
                        printf("Przegrales!\n");
                        break;
                    }
                }
                break;
            case 2:
                printf("Gracze (czlowiek i komputer) na przemian rzucaja dwa razy dwiema kostkami (losowane sa dwie liczby z zakresu od 1 do 6).\nPo pierwszym rzucie gracz probuje zgadnac czy w kolejnym rzucie suma oczek bedzie mniejsza, wieksza czy taka sama.\nJesli zgadnie otrzymuje punkt. Wygra gracz, ktory jako pierwszy zdobędzie 10 punktow.\n");
                kostki();
                break;
        }
    }
}