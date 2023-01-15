#include<stdio.h>

struct punkt{
    int x;
    int y;
};


int main(){
    struct punkt p;
    printf("Podaj wspolrzedne punkt na plaszczyznie:\nx: ");
    scanf("%d", &p.x);
    printf("y: ");
    scanf("%d", &p.y);
    printf("Twoj punkt to: (%d,%d)\n", p.x, p.y);
}