#include <stdio.h>
#include<math.h>

int main(){
    int x,y;
    printf("Podaj dwie liczby calkowite\n");
    scanf("%d\n%d", &x,&y);
    if(x<y){
        printf("Twoje liczby to: %d oraz %d\nWieksza z nich to: %d\n", x,y,y);
    }
    else if(x>y){
    printf("Twoje liczby to: %d oraz %d\nWieksza z nich to: %d\n", x,y,x);
    }
    else{
        printf("Twoje liczby to: %d oraz %d\nLiczby te sa rowne\n", x,y);
    }
    return 0;
}