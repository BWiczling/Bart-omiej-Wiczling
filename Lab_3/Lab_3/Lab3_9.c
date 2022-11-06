#include<stdio.h>
#include<stdlib.h>

int main(){
    int x1,x2,y1,y2,a,b,P,Obw;
    printf("Podaj pierwsza pare liczb reprezentujaca wierzcholek prostokata:\n");
    scanf("%d %d", &x1, &y1);
    printf("Podaj druga pare liczb reprezentujaca przeciwlegly wierzcholek prostokata:\n");
    scanf("%d %d", &x2, &y2);
    a=abs(x1-x2);
    b=abs(y1-y2);
    P=a*b;
    Obw=2*a+2*b;
    printf("Pole tego prostokata wynosi: %d\nNatomiast obwod: %d\n", P,Obw);
    return 0;
}