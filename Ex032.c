#include <stdio.h>

int main()
{
    int contador;
    for (contador = 1; contador <= 50; contador++)
    {
        if (contador % 2 == 0)
            printf("%i ", contador);
    }

    return (0);
}
