#include <stdio.h>
#include <math.h>

struct punkt{
    float x;
    float y;
};

struct wspolczynniki{
    float a;
    float b;
};

struct czworokat{
    struct punkt A;
    struct punkt B;
    struct punkt C;
    struct punkt D;
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

float odleglosc(struct punkt a, struct punkt b){
    double d=(b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y);
    d=sqrt(d);
    return d;
}

int figura(struct czworokat czworokat){
    int row_AB_CD=czy_rownolegle(czworokat.A, czworokat.B, czworokat.C, czworokat.D);
    int row_AC_BD=czy_rownolegle(czworokat.A, czworokat.C, czworokat.B, czworokat.D);
    float odl_AB,odl_AC,odl_BD,odl_CD;
    odl_AB=odleglosc(czworokat.A,czworokat.B);
    odl_AC=odleglosc(czworokat.A,czworokat.C);
    odl_BD=odleglosc(czworokat.B,czworokat.D);
    odl_CD=odleglosc(czworokat.C,czworokat.D);
    if(row_AB_CD==1&&row_AC_BD==1&&odl_AB==odl_AC){
        return 1;
    }
    else if(row_AB_CD==1&&row_AC_BD==1){
        return 2;
    }
    else if(row_AB_CD==1||row_AC_BD==1){
        return 3;
    }
    else{
        return 4;
    }
}

int main(){
    struct punkt a,b;
    struct czworokat kw;
    printf("Podaj wspolrzedne czterech punktow ktore stworza czworokat:\nA:\nx= ");
    scanf("%f", &kw.A.x);
    printf("y= ");
    scanf("%f", &kw.A.y);
    printf("B:\nx= ");
    scanf("%f", &kw.B.x);
    printf("y= ");
    scanf("%f", &kw.B.y);
    printf("C:\nx= ");
    scanf("%f", &kw.C.x);
    printf("y= ");
    scanf("%f", &kw.C.y);
    printf("D:\nx= ");
    scanf("%f", &kw.D.x);
    printf("y= ");
    scanf("%f", &kw.D.y);
    if(figura(kw)==1){
        printf("Figura jest kwadratem\n");
    }
    else if(figura(kw)==2){
        printf("Figura jest rownoleglobokiem\n");
    }
    else if(figura(kw)==3){
        printf("Figura jest trapezem\n");
    }
    else{
        printf("Figura nie jest ani kwadratem ani rownoleglobokiem ani trapezem\n");
    }
}
