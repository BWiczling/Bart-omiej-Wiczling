#include<stdio.h>

int main(){
    int a,b,pow=1;
    printf("Podaj dwie liczby naturalne a i b: ");
    scanf("%d %d", &a, &b);
    for(int i=0;i<b;i++){
        pow=pow*a;
    }

    printf("Liczba %d do potegi %d jest rowna %d\n", a,b,pow);

    return 0;
}
