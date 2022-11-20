#include<stdio.h>

int main(){
    int n;
    int pierwsza=0;
    printf("Podaj liczbe naturalna: ");
    scanf("%d", &n);
    for(int i = 2; i<n; i++){
        if(n%i==0){
        pierwsza++;
        }
    }

    if(pierwsza){
        printf("\nPodana liczba nie jest liczba pierwsza\n");
    }
    else{
        printf("\nPodana liczba jest liczba pierwsza\n");
        }
    return 0;
}