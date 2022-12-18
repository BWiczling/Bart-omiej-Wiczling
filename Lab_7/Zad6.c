#include <stdio.h>


int rozmiar(int tab[], int tab_end[]){
    int rozmiar=tab_end-tab;
    for(int i=0;i<rozmiar;i++){
        *(tab+i)=i+1;
        printf("%d\n", *(tab+i));
    }
}

int main(){
    int tab[8];
    rozmiar(tab,tab+8);

}