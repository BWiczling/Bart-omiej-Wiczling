#include<stdio.h>

int main(){
    int a,b,pow=1,c=0;
    printf("Podaj dwie liczby naturalne a i b: ");
    scanf("%d %d", &a, &b);
    while(pow<b){
        c++;
        pow=pow*a;
    }

    printf("Liczba %d do potegi %d jest rowna %d i jest wieksza od %d\n", a,c,pow,b);

    return 0;
}
