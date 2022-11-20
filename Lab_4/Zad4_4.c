#include<stdio.h>

int main(){
    int tab[5]={1,2,3,4,5};
    printf("Elementy tablicy to: \n");
    for(int i=0;i<5;i++){
        printf("%d ",tab[i]);
    }
    printf("\nTablica kwadratow poprzedniej tablicy to: \n");
    for(int i=0;i<5;i++){
        printf("%d ",tab[i]*tab[i]);
    }

    
    return 0;
}
