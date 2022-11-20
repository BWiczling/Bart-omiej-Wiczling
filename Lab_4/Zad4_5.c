#include<stdio.h>

int main(){
    int n=5;
    int a;
    int tab[5];
    printf("Podaj 5 elementow tablicy: \n");
    for(int i=0;i<n;i++){
        scanf("%d", &a);
        tab[i]=a;
    }
    printf("\nTwoja tablica to: \n");
    for(int i=0;i<n;i++){
        printf("%d ",tab[i]);
    }

    
    return 0;
}
