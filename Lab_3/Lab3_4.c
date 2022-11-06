#include <stdio.h>
#include<math.h>

int main(){
    int x,y,z;
    printf("Podaj trzy liczby calkowite\n");
    scanf("%d\n%d\n%d", &x,&y,&z);
    int max=x;
    if(max<y){
        max=y;
    }
    if(max<z){
        max=z;
        printf("\nmax: %d\n\n", max);
    }
    printf("Twoje liczby to: %d %d oraz %d\nNajwieksza z nich to: %d\n", x,y,z,max);
    return 0;
}