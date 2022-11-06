#include<stdio.h>

int main(){
    char asc;
    printf("Podaj znak ascii\n");
    scanf("%c", &asc);
    if(asc>=65&&asc<=90){
        printf("Podany znak jest wielka litera alfabetu\n");

    }
    else if(asc>=97&&asc<=122){
        printf("Podany znak jest mala litera alfabetu\n");

    }
    else{
        printf("Podany znak nie jest litera alfabetu\n");
    }
    return 0;
}