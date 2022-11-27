#include<stdio.h>

int przekroj(int a1, int b1, int a2, int b2){
    int a3,b3,wb;
    if(a1>a2){
        a3=a1;
    }
    else{
        a3=a2;
    }
    if(b1<b2){
        b3=b1;
        wb=b2;
    }
    else{
        b3=b2;
        wb=b1;
    }
    if(a3>b3){
        return -1;
    }
    return a3;
}



int main(){
    int a1,a2,b1,b2;
    printf("Podaj 4 liczby calkowite reprentujace odcinki:\n");
    scanf("%d%d%d%d", &a1, &b1, &a2, &b2);
    printf("[a1,b1] = [%d,%d]\n[a2,b2] = [%d,%d]\n", a1, b1, a2, b2);
    int a3=przekroj(a1,b1,a2,b2);
    if(a3==-1){
        printf("Przekroj tych odcinkow nie istnieje\n");
    }
    else{
        printf("Poczatek przekroju tych odcinkow jest w punkcie a3 = %d\n", a3);
    }
    return 0;
}