#include <stdio.h>


int main(){
    int a,b;
    int n_pierwsza=0;
    int pierwsza=0;
    printf("Podaj dwie liczby naturalne a i b: ");
    scanf("%d %d", &a,&b);
    int tab[b];
        for(int i = a; pierwsza<b; i++){
            n_pierwsza=0;
            for(int j=2;j<i;j++){
                if(i%j==0){
                n_pierwsza++; 
                }
            }
            if(!n_pierwsza){
                tab[pierwsza]=i;
                pierwsza++;
            }
        }
        printf("Podana ilosc liczb pierwszych (%d) wiekszych lub rownych %d\n", b,a);
        for(int i=0;i<b;i++){
            printf("%d ", tab[i]);
        }
        return 0;
    }