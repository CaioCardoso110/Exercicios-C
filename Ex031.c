#include <stdio.h>

void main()
{
    int contador; // contador de controle do loop
    for (contador = 10; contador >= 0; contador--)
    {
        printf("%i\n", contador);
    }
    printf("BUM! BUM! POOOW!");

    return(0);
}
