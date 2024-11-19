#include <stdio.h>
#include <locale.h>

int somar (int pn1, int pn2)
{
    int res;
    res = pn1 + pn2;
    return (res);
}

int subtrair (int pn1, int pn2)
{
    int res;
    res = pn1 - pn2;
    return (res);
}

int multiplicar (int pn1, int pn2)
{
    int res;
    res = pn1 * pn2;
    return (res);
}

float dividir (int pn1, int pn2)
{
    int res;
    res = (float) pn1 / (float) pn2;
    return (res);
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    int continuar;
    do
    {


        int n1, n2, resultado, opcao;

        printf("\nDigite um número: ");
        scanf("%d", &n1);
        printf("Digite outro número: ");
        scanf("%d", &n2);

        printf("-----\tOPÇÕES\t-----\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("\n\nQual você escolhe: ");
        scanf("%d", &opcao);



        switch (opcao)
        {
        case 1:
            {
                resultado = somar(n1, n2);
                break;
            }

        case 2:
            {
                resultado = subtrair(n1, n2);
                break;
            }

        case 3:
            {
                resultado = multiplicar(n1, n2);
                break;
            }

        case 4:
            {
                resultado = dividir(n1, n2);
                break;
            }

        default:
            printf("Valor invalido");
            break;
        }

        printf("O resultado é %d\n", resultado);
        printf("\nDigite 1 se quiser continuar: ");
        scanf("%d", &continuar);
    }
    while(continuar == 1);
}
