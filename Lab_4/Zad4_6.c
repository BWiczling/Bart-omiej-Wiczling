#include<stdio.h>

#define SIZE_N 7
#define SIZE_M 3

int main(){
    int tab[SIZE_N][SIZE_M]={{1,1,0},{0,0,1},{1,1,0},{0,0,1},{1,1,0},{0,0,1},{1,1,0}};
    printf("Elementy tablicy to: \n");
    for(int i=0;i<SIZE_N+2;i++){
        printf("|");
        for(int j=0;j<SIZE_M;j++){
            if(i>0&&tab[i-1][j]==1){
                printf("x");
            }
            else if(i>0&&tab[i-1][j]==0){
                printf(" ");
            }
            else{
                printf("-");
            }
        }
        printf("|\n");
    }

    
    return 0;
}
