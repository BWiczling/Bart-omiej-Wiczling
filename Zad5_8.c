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



int main(){
    int d,m,r;
    printf("Podaj date dd/mm/rrrr\n");
    scanf("%d%d%d", &d, &m, &r);
    if(czy_prawidlowy(d,m,r)){
        printf("\nPodano prawidlowa date\n");
    }
    else{
        printf("\nPodana data jest nieprawidlowa\n");
    }

}