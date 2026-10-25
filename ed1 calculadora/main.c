#include <stdio.h>
#include "calculadora.h"

int main(void){
    float a, b;
    printf("Insira o numerador: ");
    scanf("%f", &a);
    printf("Insira o denominador: ");
    scanf("%f", &b);
    printf("Soma: %.2f\n", soma(a, b));
    printf("Subtração: %.2f\n", subtracao(a, b));
    printf("Multiplicação: %.2f\n", multiplicacao(a, b));
    printf("Divisão: %.2f\n", divisao(a, b));
    return 0;
}