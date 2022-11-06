#include <stdio.h>
#include<math.h>

int main(){
    int rok;
    printf("Podaj rok\n");
    scanf("%d", &rok);
    int przest,przest400;
    przest=rok%4;
    przest400=rok%400;
    if(przest){
        printf("Ten rok nie jest rokiem przestepnym\n");
    }
    else if(!przest400){
        printf("Ten rok nie jest rokiem przestepnym\n");
    }
    else{
        printf("Ten rok jest rokiem przestepnym\n");
    }
    return 0;
}