#include <stdio.h>
#include <math.h>

typedef struct Ponto {
    int x, y;
}Ponto;

int main(){
    Ponto A, B;
    float distancia;

    A.x = 100;
    A.y = 50;

    B.x = 45;
    B.y = 200;

    distancia = sqrt(pow((B.x - A.x), 2) + pow((B.y - A.y), 2));

    printf("A distância entre os dois pontos será %f\n", distancia);   
}