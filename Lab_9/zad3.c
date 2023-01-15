#include<stdio.h>


struct punkt{
    float x;
    float y;
};

struct trojkat{
    struct punkt a;
    struct punkt b;
    struct punkt c;
};

int czy_trojkat(struct punkt a, struct punkt b, struct punkt c){
    if((b.x-a.x)*(c.y-a.y)==(b.y-a.y)*(c.x-a.x)){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    struct trojkat t;
    printf("Podaj wspolrzedne trzech punktow:\n");
    printf("Punkt %c\n", 65);
    printf("x= ");
    scanf("%f", &t.a.x);
    printf("y= ");
    scanf("%f", &t.a.y);
    printf("Punkt %c\n", 65+1);
    printf("x= ");
    scanf("%f", &t.b.x);
    printf("y= ");
    scanf("%f", &t.b.y);
    printf("Punkt %c\n", 65+2);
    printf("x= ");
    scanf("%f", &t.c.x);
    printf("y= ");
    scanf("%f", &t.c.y);
    if(czy_trojkat(t.a,t.b,t.c)==0){
        printf("Z podanych punktow nie mozna stworzyc trojkata!\n");
    }
    else{
        printf("Z podanych punktow mozna stworzyc trojkat!\n");
    }
}
