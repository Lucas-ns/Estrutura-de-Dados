#include <stdio.h>

int primeiroPeloSegundo(int valor1, int valor2) {
    if (valor1 % valor2 == 0)
    {
        return printf("O segundo valor é divisível pelo primeiro!\n");
    }
    else
    {
        return printf("O segundo valor não é divisível pelo primeiro!\n");
    }
}

int main() {
    primeiroPeloSegundo(4, 10);
}