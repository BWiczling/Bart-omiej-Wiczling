#include<stdio.h>

int czy_przestepny(int r){
    if(r%4!=0 || r%400==0){
        return 0;
    }
    else {
        return 1;
    }
}

int dni_miesiaca(int m, int r){
    if(m==2){
        if(czy_przestepny(r)){
            return 29;
        }
        else{
            return 28;
        }
    }
    else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        return 31;
    }
    else{
        return 30;
    }
}

int czy_prawidlowy(int d, int m, int r){
    if(m>12||m<1){
        return 0;
    }
    else if(d<0||d>dni_miesiaca(m,r)){
        return 0;
    }
    else{
        return 1;
    }
}

int dni_do_konca(int d, int m, int r){
    int pozostale_msc=12-m;
    int pozostale_dni_msc=dni_miesiaca(m,r)-d;
    int pozostale_dni=0;
    for(int i=1;i<pozostale_msc+1;i++){
        pozostale_dni=pozostale_dni+dni_miesiaca(m+i,r);
    }
    pozostale_dni=pozostale_dni+pozostale_dni_msc;
    return pozostale_dni;
}


int main(){
    int d,m,r;
    printf("Podaj date dd/mm/rrrr\n");
    scanf("%d%d%d", &d, &m, &r);
    if(!czy_prawidlowy(d,m,r)){
        printf("Podano nieprawidlowa date!\n");
        return 0;
    }
    printf("Do konca roku pozostalo: %d dni\n", dni_do_konca(d,m,r));
}