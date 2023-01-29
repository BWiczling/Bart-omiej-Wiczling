#include <stdio.h>
#include "Funkcje.h"




int main(){
    printf("Witaj w programie obliczajacym pola oraz obwod/objetosc podanych figur/bryl\n");
    int i;
    float a,b,c,h,r;
    while(1){
        printf("Wybierz dla ktorej figury/bryly chcesz obliczyc pole oraz obwod/objetosc lub zakoncz dzialanie programu:\n");
        printf("1.Kwadrat\n2.Trojkat\n3.Graniastoslup\n4.Kolo\n5.Koniec programu\n");
        scanf("%d", &i);
        if(i==5){
            break;
        }
        switch(i){
            case 1:
                printf("Podaj dlugosc boku kwadratu: ");
                scanf("%f", &a);
                printf("Pole kwadratu jest rowne: %f\n", p_kwadrat(a));
                printf("Natomiast obowod jest rowny: %f \n",o_kwadrat(a));
                break;
            case 2:
                printf("Podaj dlugosci bokow trojkata oraz jego wysokosc\n");
                printf("a= ");
                scanf("%f", &a);
                printf("b= ");
                scanf("%f", &b);
                printf("c= ");
                scanf("%f", &c);
                printf("h= ");
                scanf("%f", &h);
                printf("Pole trojkata wynosi: %f\n", p_trojkat(a,h));
                printf("Natomiast obwod jest rowny: %f\n", o_trojkat(a,b,c));
                break;
            case 3:
                printf("Podaj dlugosci podstawy graniastoslupa oraz jego wysokosc\n");
                printf("a= ");
                scanf("%f", &a);
                printf("b= ");
                scanf("%f", &b);
                printf("h= ");
                scanf("%f", &h);
                printf("Pole graniastoslupa wynosi: %f\n", p_graniastoslup(a,b,h));
                printf("Natomiast objetosc jest rowna: %f\n", obj_graniastoslup(a,b,h));
                break;
            case 4:
                printf("Podaj promien kuli\n");
                printf("r= ");
                scanf("%f", &r);
                printf("Pole kuli wynosi: %f\n", p_kula(r));
                printf("Natomiast objetosc jest rowna: %f\n", obj_kula(r));
                break;
        }
        printf("\n\n\n");

    }
    

}