#include <stdio.h>
#include "conversor.h"

int main(void) {
    float m;

    printf("Digite o valor em metros: ");
    scanf("%f", &m);

    printf("%.2f m em centimetros: %.2f cm\n", m, mCentimetros(m));
    printf("%.2f m em milimetros: %.2f mm\n", m, mMilimetros(m));
    printf("%.2f m em quilometros: %.6f km\n", m, mQuilometros(m));

    return 0;
}