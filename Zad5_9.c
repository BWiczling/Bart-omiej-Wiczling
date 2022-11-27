#include<stdio.h>

int czy_przestepny(int r){
    if(r%4!=0 || r%400==0){
        return 0;
    }
    else {
        return 1;
    }
}


int main(){
    int rok;
    printf("Podaj rok:\n");
    scanf("%d", &rok);
    if(czy_przestepny(rok)){
        printf("Podany rok jest przestepny\n");
    }
    else{
        printf("Podany rok nie jest przestepny\n");
    }
}