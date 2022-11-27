#include <stdio.h>

void dodawanie(int a, int b){
    printf("Twoj wynik to: %d\n", a+b);
}

void odejmowanie(int a, int b){
    printf("Twoj wynik to: %d\n", a-b);
}

void mnozenie(int a, int b){
    printf("Twoj wynik to: %d\n", a*b);
}

void dzielenie(int a, int b){
    int dziel=a/b;
    int reszta=a%b;
    printf("Twoj wynik to: %d reszta %d\n", dziel, reszta);
}



int main(){
    int a1,a2;
    printf("Podaj dwie liczby calkowite:\n");
    scanf("%d %d", &a1, &a2);
    printf("Wybierz co program ma zrobić dla podanych liczb:\n1.Dodawanie\n2.Odejmowanie\n3.Mnożenie\n4.Dzielenie\n");
    int wybor;
    scanf("%d", &wybor);
    while(wybor!=1&&wybor!=2&&wybor!=3&&wybor!=4){
        printf("Podano nieprawidlowa wartosc, prosze podac ja ponownie:\n");
        scanf("%d", &wybor);
    }
    switch (wybor){
        case 1: dodawanie(a1,a2);
        break;
        case 2: odejmowanie(a1,a2);
        break;
        case 3: mnozenie(a1,a2);
        break;
        case 4: dzielenie(a1,a2);
        break;
    }
    return 0;
}

