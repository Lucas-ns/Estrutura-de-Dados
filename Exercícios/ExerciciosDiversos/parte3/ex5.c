#include <stdio.h>

int main()
{
    int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", v[i] * 2);
    }
    return 0;
}