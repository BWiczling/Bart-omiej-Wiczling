#include <stdio.h>

int glob=10;

void adress(int a, int b){
    printf("Adres pierwszej liczby: %p\nAdres drugiej liczby: %p\n", &a, &b);
}

int main(){
    int lok=glob;
    printf("Adres zmiennej globalnej: %p\nAdres zmiennej lokalnej: %p\n", &glob, &lok);
    adress(glob,lok);
}