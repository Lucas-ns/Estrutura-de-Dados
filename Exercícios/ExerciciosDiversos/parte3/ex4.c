#include <stdio.h>
#include <string.h>

int main()
{
    char c[50];
    char invertida[50];
    int j = 0; 

    printf("Digite uma palavra: ");
    scanf("%s", c);

    for (int i = strlen(c) - 1; i >= 0; i--)
    {
        invertida[j] = c[i];
        j += 1;
    }

    invertida[j] = '\0';

    printf("%s\n", invertida);

    return 0;
}