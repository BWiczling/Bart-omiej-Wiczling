#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tab[6];

void czy_wylosowana(int n, int i){
    for(int j=0;j<i;j++){
        if(tab[i]==tab[j]){
            tab[i]=rand()%49+1;
            czy_wylosowana(tab[i],i);
        }
    }
}

int main(){
    int seed;
    time_t tt;
    seed=time(&tt);
    srand(seed);
    FILE *plik;
    plik=fopen("lotto.txt","w");
    for(int i=0;i<6;i++){
        tab[i]=rand()%49+1;
        czy_wylosowana(tab[i],i);
    }
    for(int i=0;i<6;i++){
        fprintf(plik,"%d\n", tab[i]);
    }
    fclose(plik);
}