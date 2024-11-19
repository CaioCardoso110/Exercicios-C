#include <stdio.h>
#include <locale.h>

int n, soma, c, cont;
void main()
{
    setlocale(LC_ALL, "Portuguese");
    for (c = 0; c<=5; c++)
    {
        printf("Digite o %d° valor: ", c + 1);
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            cont++;
            soma = soma + n;
        }
    }
    printf("Você informou %d números pares e a soma foi %d", cont, soma);
}
