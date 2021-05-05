#include <stdio.h>

int nuloOuNao(int a) {
    if (a == 0)
    {
        return printf("O valor digitado é nulo!\n");
    }
    else
    {
        return printf("O valor digitado foi %d!\n", a);
    }
}

int main() {
    nuloOuNao(10);
}