#include <stdio.h>
#include <stdlib.h>

float soma(float a, float b){
    return a+b;
}
float subtracao(float a, float b){
    return a-b;
}
float multiplicacao(float a, float b){
    return a*b;
}
float divisao(float a, float b){
    if(b==0.0f){
        printf("Erro: Divisão por zero!\n")
        return 0.0f;
    }
    return a/b;
}