#include<stdio.h>

struct punkt{
    float x;
    float y;
};

struct wspolczynniki{
    float a;
    float b;
};

struct wspolczynniki rownianie(struct punkt p1, struct punkt p2){
    struct wspolczynniki w;
    if(p1.x==p2.x&&p1.y==p2.y){
        w.a=0;
        w.b=0;
        printf("Podane punkty sa takie same\n");
        return w;
    }
    else if(p1.x==p2.x){
        w.a=0;
        w.b=p1.x;
        return w;
    }
    else if(p1.y==p2.y){
        w.a=0;
        w.b=p1.y;
        return w;
    }
    else{
        w.a=(p1.y-p2.y)/(p1.x-p2.x);
        w.b=p1.y-((p1.y-p2.y)/(p1.x-p2.x)*p1.x);
    }
    return w;
}


int czy_rownolegle(struct punkt a1, struct punkt b1, struct punkt a2, struct punkt b2){
    struct wspolczynniki w1,w2;
    w1=rownianie(a1,b1);
    w2=rownianie(a2,b2);
    if(w1.a==w2.a){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    struct punkt A1,A2,B1,B2;
    printf("Podaj wspolrzedne czterech punktow:\nA1:\nx= ");
    scanf("%f", &A1.x);
    printf("y= ");
    scanf("%f", &A1.y);
    printf("B1:\nx= ");
    scanf("%f", &B1.x);
    printf("y= ");
    scanf("%f", &B1.y);
    printf("A2:\nx= ");
    scanf("%f", &A2.x);
    printf("y= ");
    scanf("%f", &A2.y);
    printf("B2:\nx= ");
    scanf("%f", &B2.x);
    printf("y= ");
    scanf("%f", &B2.y);
    if(czy_rownolegle(A1,B1,A2,B2)==1){
        printf("Proste A1B1 oraz A2B2 sa rownolegle\n");
    }
    else{
        printf("Proste A1B1 oraz A2B2 nie sa rownolegle\n");
    }
}