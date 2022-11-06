#include <stdio.h>
#include<math.h>

int main(){
    int a,b;
    int d,o,m,mod;
    float dziel;
    printf("Podaj dwie liczby calkowite:\n");
    scanf("%d\n%d", &a,&b);
    printf("Twoje liczby to: %d oraz %d\n", a,b);
    d=a+b;
    o=a-b;
    m=a*b;
    dziel=a/b;
    mod=a%b;
    printf("Teraz wkonane zostana dzialania na tych liczbach:\n");
    printf("Dodawanie %d+%d=%d\nOdejmowanie %d-%d=%d\nMnozenie %d*%d=%d\n", a,b,d,a,b,o,a,b,m);
    printf("Dzielenie %d/%d=%f\nReszte z dzielenia %d(modulo%d)=%d\n", a,b,dziel,a,b,mod);
    

    return 0;
}
