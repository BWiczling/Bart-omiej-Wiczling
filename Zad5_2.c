#include<stdio.h>

int rowne(char a[], char b[]){
    if(a[0]==b[0]){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char a[1],b[1];
    printf("Podaj dwa znaki: \n");
    scanf("%s %s", a, b);
    if(rowne(a,b)){
        printf("\nPodane znaki sa takie same\n");
    }
    else{
        printf("Podane znaki sa rozne\n");
    }
    return 0;
}