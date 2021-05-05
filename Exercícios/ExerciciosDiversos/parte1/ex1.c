#include <stdio.h>

int main(){
    int eleitores, brancos, nulos, validos;
    float porcBrancos, porcNulos, porcValidos;

    printf("Digite o número total de eleitores: ");
    scanf("%d", &eleitores);
    printf("Número de votos brancos: ");
    scanf("%d", &brancos);
    printf("Número de votos nulos: ");
    scanf("%d", &nulos);
    printf("Número de votos válidos: ");
    scanf("%d", &validos);

    porcBrancos = 100 * brancos / eleitores;
    printf("A porcetagem de votos brancos é de %.1f%%\n", porcBrancos);

    porcNulos = 100 * nulos / eleitores;
    printf("A porcetagem de votos nulos é de %.1f%%\n", porcNulos);

    porcValidos = 100 * validos / eleitores;
    printf("A porcetagem de votos válidos é de %.1f%%\n", porcValidos);


    return 0;
}