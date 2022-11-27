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

int main(){
    int msc,rok;
    int dni;
    printf("Podaj miesiac i rok: \n");
    scanf("%d%d", &msc, &rok);
    dni=dni_miesiaca(msc,rok);
    printf("Podany miesiac ma: %d dni\n", dni);
}