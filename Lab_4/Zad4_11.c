#include <stdio.h>




int main(){
    int tab[5][5];
    tab[0][0]=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            if(i<2||j==0||j==i){
                tab[i][j]=1;
            }
            else{
                tab[i][j]=tab[i-1][j-1]+tab[i-1][j];
            }
            printf(" %d " , tab[i][j]);
        }
        printf("\n");
    }
    return 0;
}