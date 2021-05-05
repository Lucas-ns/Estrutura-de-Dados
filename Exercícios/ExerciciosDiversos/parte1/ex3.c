#include <stdio.h>

int main() {
    float m, dec, cm, mm;

    printf("Digite um valor em metros: ");
    scanf("%f", &m);

    dec = m * 100;
    cm = m * 1000;
    mm = m * 10000;

    printf("Valor convertido em decímetros: %.1fdm\n", dec);
    printf("Valor convertido em centímetros: %.1fcm\n", cm);
    printf("Valor convertido em milímetros: %.1fmm\n", mm);

    return 0;

}