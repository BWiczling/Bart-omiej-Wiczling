#include<stdio.h>



int palindrom(char napis[], int rozmiar){
    for(int i=0;i<rozmiar;i++){
        if(rozmiar==i){
            return 1;
        }
        if(napis[i]!=napis[rozmiar]){
            return 0;
        }
        else{
            rozmiar--;

        }
    }
    return 1;
}

int main(){
    char napis[255];
    int koniec_napisu=0;
    scanf("%s", napis);
    for(int i=0;i<255;i++){
        if(napis[i]=='\0'){
            break;
        }
        else{
            koniec_napisu++;
        }
    }
    int a=0;
    a=palindrom(napis,koniec_napisu-1);
    if(a){
        printf("\nPodany ciag znakow jest palindromem\n");
    }
    else{
        printf("Podane ciag znakow nie jest palindromem\n");
    }

    return 0;
}