#include<stdio.h>


void drukujTablice(int tab[3][3][3]){
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                printf("%d ", tab[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void wieksi_sasiedzi(int tab[3][3][3], int a, int b, int c){
    int rozmiar=2;
    int ilosc_elementow=0;
    if(a==0){
    }
    else{
        if(tab[a-1][b][c]>tab[a][b][c]){
        printf("Tab[%d][%d][%d] = %d\n", a-1, b, c, tab[a-1][b][c]);
        ilosc_elementow++;
        }
    }
    if(a==rozmiar){
    }
    else{
        if(tab[a+1][b][c]>tab[a][b][c]){
        printf("Tab[%d][%d][%d] = %d\n", a+1, b, c, tab[a+1][b][c]);
        ilosc_elementow++;
        }
    }
    if(b==0){
    }
    else{
        if(tab[a][b-1][c]>tab[a][b][c]){
        printf("Tab[%d][%d][%d] = %d\n", a, b-1, c, tab[a][b-1][c]);
        ilosc_elementow++;
        }
    }
    if(b==rozmiar){
    }
    else{
        if(tab[a][b+1][c]>tab[a][b][c]){
        printf("Tab[%d][%d][%d] = %d\n", a, b+1, c, tab[a][b+1][c]);
        ilosc_elementow++;
        }
    }
    if(c==0){
    }
    else{
        if(tab[a][b][c-1]>tab[a][b][c]){
        printf("Tab[%d][%d][%d] = %d\n", a, b, c-1, tab[a][b][c-1]);
        ilosc_elementow++;
        }
    }
    if(c==rozmiar){
    }
    else{
        if(tab[a][b][c+1]>tab[a][b][c]){
        printf("Tab[%d][%d][%d] = %d\n", a, b, c+1, tab[a][b][c+1]);
        ilosc_elementow++;
    }
    }
    if(!ilosc_elementow){
        printf("Brak wiekszych sasiadow\n");
    }

}

int main(){
    int rozmiar=3;
    int a,b,c;
    int tab[rozmiar][rozmiar][rozmiar];
    for (int i=0;i<rozmiar;i++){
        for(int j=0;j<rozmiar;j++){
            for(int k=0;k<rozmiar;k++){
                tab[i][j][k]=i+j+k;
            }
        }
    }
    drukujTablice(tab);
    printf("Podaj wspolrzedne punktu w tablicy trojwymiarowej (od 0 do 2):\n");
    scanf("%d%d%d", &a, &b, &c);
    while(a<0||a>2||b<0||b>2||c<0||c>2){
        printf("Podano nieprawidlowe wspolrzedne, podaj je ponownie:\n");
        scanf("%d%d%d", &a, &b, &c);
    }
    printf("Twoj element to: %d\n", tab[a][b][c]);
    printf("Sasiedzi wieksi od wybranego elementu: \n");
    wieksi_sasiedzi(tab,a,b,c);

    return 0;
}