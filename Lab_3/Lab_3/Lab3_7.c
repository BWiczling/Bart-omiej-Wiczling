#include <stdio.h>
#include<math.h>

int main(){
    int dzien,msc,rok;
    printf("Podaj dzien miesiac i rok oddzielajac je kropkami\n");
    scanf("%d.%d.%d", &dzien, &msc, &rok );
    int przest,przest400;
    przest=rok%4;
    przest400=rok%400;
    if(dzien<1 || dzien>31 || msc<1 || msc >12){
        printf("Podano nieprawidlowa date\n");
    }
    else if (msc == 2){
        if(przest || !(przest400)){
            if(dzien>28){
            printf("Podano nieprawidlowa date\n");
            }
        }
        else{
            if(dzien>29){
            printf("Podano nieprawidlowa date\n");
            }
            else{
                printf("Podano prawidlowa date\n");
            }
        }
    }
    else if (msc==1 || msc==3||msc==5||msc==7||msc==8||msc==10||msc==12){
            if(dzien>31){
                printf("Podano nieprawidlowa date\n");
            }
            else{
                printf("Podano prawidlowa date\n");
            }
            
    }
    else if (msc==4||msc==6||msc==9||msc==11){
            if(dzien>30){
            printf("Podano nieprawidlowa date\n");
            }
            else{
                printf("Podano prawidlowa date\n");
            }
    }
    return 0;
}