#include <stdio.h>
#define M_PI 3.14159265358979323846

float p_kwadrat(float a){
    return a*a;
}

float o_kwadrat(float a){
    return 4*a;
}

float p_trojkat(float a, float h){
    float pole=(a*h)/2;
    return pole;
}

float o_trojkat(float a, float b, float c){
    return a+b+c;
}

float obj_graniastoslup(float a, float b, float h){
    float obj=a*b*h;
    return obj;
}

float p_graniastoslup(float a, float b, float h){
    float p=2*a*b+2*a*h+2*b*h;
    return p;
}

float p_kula(float r){
    float p=4*M_PI*r*r;
    return p;
}

float obj_kula(float r){
    float obj=(4*M_PI*r*r*r)/3;
    return obj;
}