#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale(LC_ALL, "Portuguese");
    int n, contador = 0, r;
    printf("Digite um número para ver sua tabuada: ");
    scanf("%i", &n);
    for (contador; contador <= 10; contador++)
    {
        printf("%d\tx\t%d\t=\t%d\n", n, contador, r = n * contador);
    }
}
