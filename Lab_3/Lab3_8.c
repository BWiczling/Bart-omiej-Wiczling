#include <stdio.h>
#include<math.h>

int main(){
    int dzien1,miesiac1,rok1;
    int dzien2,miesiac2,rok2;
    printf("Podaj dzien miesiac i rok oddzielajac je kropkami\n");
    scanf("%d.%d.%d", &dzien1, &miesiac1, &rok1);
    printf("Podaj dzien miesiac i rok oddzielajac je kropkami\n");
    scanf("%d.%d.%d", &dzien2, &miesiac2, &rok2);
    int rokw,rokm,mscm,dm,mscw,dw;
    rokw=rok1;
    mscw=miesiac1;
    dw=dzien1;
    if(rok2>rok1){
        printf("wieksza data to: %d.%d.%dr\n", dzien2,miesiac2,rok2);
        rokw=rok2;
        mscw=miesiac2;
        dw=dzien2;
        rokm=rok1;
        mscm=miesiac1;
        dm=dzien1;
        if(mscw>mscm){
            printf("Te daty rozni %d dni, %d msc oraz %d lat\n", dw-dm, mscw-mscm,rokw-rokm);
        }
        else{
            printf("Te")
        }
    }
    else if(rok1>rok2){
        printf("wieksza data to: %d.%d.%dr\n", dzien1,miesiac1,rok1);
        rokw=rok1;
        mscw=miesiac1;
        dw=dzien1;
        rokm=rok2;
        mscm=miesiac2;
        dm=dzien2;
        if(mscw>mscm){
            printf("Te daty rozni %d dni, %d msc oraz %d lat\n", dw-dm, mscw-mscm,rokw-rokm);
        }
    }
    else{
        if(miesiac1>miesiac2){
            printf("wieksza data to: %d.%d.%dr\n", dzien1,miesiac1,rok1);
            rokw=rok1;
            mscw=miesiac1;
            dw=dzien1;
            rokm=rok2;
            mscm=miesiac2;
            dm=dzien2;
            if(dw>dm){
                printf("Te daty rozni %d dni oraz %d miesiecy\n", dw-dm, mscw-mscm);
            }
            else{
                printf("Te daty rozni %d dni oraz %d msc\n", dw+(30-dm), mscw-(mscm+1));
            }
        }
        else if(miesiac2>miesiac1){
            printf("wieksza data to: %d.%d.%dr\n", dzien2,miesiac2,rok2);
            rokw=rok2;
            mscw=miesiac2;
            dw=dzien2;
            rokm=rok1;
            mscm=miesiac1;
            dm=dzien1;
            if(dw>dm){
                printf("Te daty rozni %d dni oraz %d miesiecy\n", dw-dm, mscw-mscm);
            }
            else{
                printf("Te daty rozni %d dni oraz %d msc\n", dw+(30-dm), mscw-(mscm+1));
            }
        }
        else{
            if(dzien1>dzien2){
                printf("wieksza data to: %d.%d.%dr\n", dzien1,miesiac1,rok1);
                rokw=rok1;
                mscw=miesiac1;
                dw=dzien1;
                rokm=rok2;
                mscm=miesiac2;
                dm=dzien2;
                printf("Te daty rozni %d dni\n", dw-dm);
            }
            else if(dzien2>dzien1){
                printf("wieksza data to: %d.%d.%dr\n", dzien2,miesiac2,rok2);
                rokw=rok2;
                mscw=miesiac2;
                dw=dzien2;
                rokm=rok1;
                mscm=miesiac1;
                dm=dzien1;
                printf("Te daty rozni %d dni\n", dw-dm);
            }
            else{
                printf("Te daty sa takie same\n");
            }
            }
        }

    return 0;
}