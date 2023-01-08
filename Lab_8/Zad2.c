#include <stdio.h>
#include <stdlib.h>



int main(){
    int tab[100];
    int j;
    FILE *dane1,*dane2;
    dane1=fopen("nieparzyste.txt","w");
    dane2=fopen("parzyste.txt","w");
    int n;
    printf("Podaj liczbe liczb ktora chcesz podac\n");
    scanf("%d", &n);
    printf("Podaj te liczby:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &j);
        tab[i]=j;
    }
    for(int i=0;i<n;i++){
        if(tab[i]%2){
            fprintf(dane1,"%d ", tab[i]);
        }
        else{
            fprintf(dane2,"%d ", tab[i]);
        }
    }
    fclose(dane1);
    fclose(dane2);
}