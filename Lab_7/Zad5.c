#include <stdio.h>

void rosnaco(int *a, int*b, int *c){
    int max=*c,min=*a,sr=*b;
    if(max<*b){
        max=*b;
    }
    if(max<*a){
        max=*b;
    }
    if(min>*b){
        min=*b;
    }
    if(min>*c){
        min=*c;
    }
    if((min==*a&&max==*b)||(max==*a&&min==*b)){
        sr=*c;
    }
    else if((min==*a&&max==*c)||(max==*c&&min==*a)){
        sr=*b;
    }
    else{
        sr=*a;
    }
    *a=min;
    *b=sr;
    *c=max;
}



int main(){
    int a=21,b=123,c=4;
    printf("Liczby przed posortowaniem: %d %d %d\n", a,b,c);
    rosnaco(&a,&b,&c);
    printf("Liczby po posortowaniu: %d %d %d\n", a,b,c);
}