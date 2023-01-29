#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int losowanie_sum(int a){
    int wybor=0,i=0,zarodek;
    time_t tt;
    zarodek = time(&tt);
    srand(zarodek);
    while(i<8){
        if(a+1==2+4*i){
            wybor=1;
        }
        else if(a+2==2+4*i){
            wybor=2;
        }
        else if(a+3==2+4*i){
            wybor=3;
        }
        i++;
    }
    if(wybor!=1&&wybor!=2&&wybor!=3){
        wybor=rand()%3+1;
    }
    return wybor;
}

void kostki(){
    int g,k,zar,choice,g1,k1,w_gracz=0,w_komp=0;
    time_t t;
    zar=time(&t);
    srand(zar);
    while(1){
        printf("\n\nRzucasz kostka!\n");
        getchar();
        getchar();
        g=rand()%6+1;
        printf("Twoja liczba to: %d\n", g);
        if(g<=3){
            printf("Komputer wybral ze nastepna liczba bedzie wieksza\n");
            choice=1;
        }
        else{
            printf("Komputer wybral ze nastepna liczba bedzie mniejsza\n");
            choice=0;
        }
        printf("Rzucasz kostka drugi raz!\n");
        getchar();
        g1=rand()%6+1;
        printf("Twoja liczba to: %d\n", g1);
        if(g1>g&&choice==1){
            printf("Komputer zdobywa punkt!\n");
            w_komp++;
        }
        if(g1<g&&choice==0){
            printf("Komputer zdobywa punkt!\n");
            w_komp++;
        }
        printf("Komputer rzuca kostka!\n");
        getchar();
        k=rand()%6+1;
        printf("Jego liczba to: %d\n", k);
        printf("Podaj 0 jesli myslisz ze liczba bedzie mniejsza, 1 jesli uwazasz ze wieksza lub 2 jesli uwazasz ze beda rowne:\n");
        scanf("%d", &choice);
        printf("Komputer rzuca kostka drugi raz!\n");
        getchar();
        k1=rand()%6+1;
        printf("Jego liczba to: %d\n", k1);
        if(k1>k&&choice==1){
            printf("Zdobywasz punkt!\n");
            w_gracz++;
        }
        if(k1<k&&choice==0){
            printf("Zdobywasz punkt!\n");
            w_gracz++;
        }
        if(k1==k&&choice==2){
            printf("Zdobywasz punkt!\n");
            w_gracz++;
        }
        printf("Obecny wynik to:\nkomputer: %d\ngracz: %d\n", w_komp, w_gracz);
        if(w_komp==10&&w_gracz==10){
            printf("Remis!\n");
            getchar();
            break;
        }
        if(w_gracz==10){
            printf("Brawo! Wygrales!\n");
            getchar();
            break;
        }
        if(w_komp==10){
            printf("Niestety, wygral komputer!\n");
            getchar();
            break;
        }
    }
    
}
