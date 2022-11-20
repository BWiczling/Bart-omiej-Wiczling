#include<stdio.h>

int main(){
    int n,suma_kwadratow=0;
    printf("Podaj liczbe naturalna n: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        suma_kwadratow=suma_kwadratow+i*i;
        printf("%d\n", suma_kwadratow);
    }

    printf("Suma_kwadratow od 1 do n to: %d", suma_kwadratow);

    return 0;
}
