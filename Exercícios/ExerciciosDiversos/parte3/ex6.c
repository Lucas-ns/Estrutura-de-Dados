#include <stdio.h>

int main(){
    int valores[] = {1, 4, 9, 16, 25, 36};

    for (int i = 0; i < 6; i++)
    {
        printf("O elemento de índice %d vale %d.\n", i, valores[i]);
    }
    return 0;
}