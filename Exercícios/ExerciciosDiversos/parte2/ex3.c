#include <stdio.h>

int positivoOuNegativo(int valor) {
    if (valor > 0)
    {
        return printf("O valor é positivo!\n");
    } 
    else 
    {
        return printf("O valor é negativo!\n");
    }
}

int main() {
    positivoOuNegativo(50);
}