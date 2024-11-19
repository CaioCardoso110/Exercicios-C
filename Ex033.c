#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int contador, soma, cont = 0; // Iniciar o contador sempre com 0
    for (contador = 1; contador <= 500; contador+=2)
    {
        if (contador % 3 == 0)
        {
            soma += contador;
            cont++;
        }
    }
    printf("A soma de todos os %i valores solicitados é %i", cont, soma);
}
