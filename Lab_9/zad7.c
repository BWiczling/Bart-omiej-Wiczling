#include <stdio.h>
#include <math.h>

struct punkt{
    float x;
    float y;
};

struct kwadrat{
    struct punkt A;
    struct punkt B;
};

int czy_kwadrat(struct kwadrat kw){
    if(abs(kw.A.x-kw.B.x)==abs(kw.A.y-kw.B.y)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    struct kwadrat kwa;
    scanf("%f", &kwa.A.x);
    scanf("%f", &kwa.A.y);
    scanf("%f", &kwa.B.x);
    scanf("%f", &kwa.B.y);
    if(czy_kwadrat(kwa)==1){
        printf("Jest to kwadrat");
    }
    else{
        printf("Nie jest to kwadrat");
    }
}