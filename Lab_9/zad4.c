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
        w.a=p1.x;
        w.b=0;
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

int main(){
    struct punkt a,b;
    struct wspolczynniki w1;
    printf("Podaj dwa punkty:\nA:\nx= ");
    scanf("%f", &a.x);
    printf("y= ");
    scanf("%f", &a.y);
    printf("B:\nx= ");
    scanf("%f", &b.x);
    printf("y= ");
    scanf("%f", &b.y);
    w1=rownianie(a,b);
    if(w1.a==0&&w1.b==0){
        printf("Brak rownania prostej!\n");
    }
    else if(a.x==b.x){
        printf("Rownanie prostej to x=%f\n", w1.a);
    }
    else if(a.y==b.y){
        printf("Rownanie prostej to y=%f\n", w1.b);
    }
    else{
        printf("Rownanie prostej to y=%f*x+%f\n", w1.a, w1.b);
    }
}