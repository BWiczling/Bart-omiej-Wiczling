#include <stdio.h>


int main(){
    int n;
    printf("Podaj wysokosc trojkatu Pascala ");
    scanf("%d", &n);
    int tab[n][n];
    tab[0][0]=1;
    int space=n;
    for(int i=0;i<n;i++){
        while(space>i){
            printf("  ");
            space--;
        }
        for(int j=0;j<=i;j++){
            space=n;
            if(i<2||j==0||j==i){
                tab[i][j]=1;
            }
            else{
                tab[i][j]=tab[i-1][j-1]+tab[i-1][j];
            }

            printf("%4d" , tab[i][j]);
        }
        printf("\n"); 

    }
    return 0;
}