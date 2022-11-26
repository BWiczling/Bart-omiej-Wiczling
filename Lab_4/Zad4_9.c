#include <stdio.h>
#include <windows.h>

void WyswietlPlansze(int a, int b){
    char tab[12][13];
    for(int i=0;i<12;i++){
        if(i==0||i==11){
            tab[0][i]=' ';
        }
        else{
            tab[0][i]='_';
        }
    }

    for(int i=1;i<10;i++){
        for(int j=0;j<12;j++){
            if(j==0||j==11){
                tab[i][j]='|';
            }
            else{
                tab[i][j]=' ';
            }
        }
    }
    for(int i=0;i<12;i++){
        if(i==0||i==11){
            tab[10][i]='|';
        }
        else{
            tab[10][i]='_';
        }
    }
    tab[a][b]='x';

    for(int i=0;i<11;i++){
        for(int j=0;j<12;j++){
            printf("%c ", tab[i][j]);
        }
        printf("\n");
    }
}



int main(){
    int a1,b1,a2,b2,r1,r2;
    printf("Podaj wspolrzedne poczatkowe pileczki z przedzialu od 1 do 10:\n");
    scanf("%d%d", &a1, &b1);
    printf("\nPodaj wspolrzedne do ktorych pileczka ma sie przemiescic z punktu poczatkowego z przedzialu od 1 do 10\n");
    scanf("%d%d", &a2, &b2);
    r1=a2-a1;
    r2=b2-b1;
    system("cls");
    WyswietlPlansze(a1,b1);
    while(1){
        a1=a1+r1;
        b1=b1+r2;
        if(a1<1||b1<1||a1>9||b1>10){
            break;
        }
        Sleep(1000);
        system("cls");
        WyswietlPlansze(a1,b1);
    }
    system("pause");
}