#include <stdio.h>
#include <locale.h>

int n1, n2, r, opcao;

void main(){
    setlocale(LC_ALL, "Portuguese");

    printf("VALOR 1 = ");
    scanf("%i", &n1);
    printf("VALOR 2 = ");
    scanf("%i", &n2);
    printf("==================\n");
    printf("+\tAdi��o\n");
    printf("-\tSubtra��o\n");
    printf("*\tMultiplica��o\n");
    printf("/\tDivis�o\n");
    printf("==================\n");
    printf("Digite sua op��o => ");
    scanf("%i", &opcao);
    printf("-----------------------------\n");
    switch (opcao) {
        case 1:
            r = n1 + n2;
            printf("O resultado de %i + %i � igual a %i\n", n1, n2, r);
            printf("-----------------------------\n");
            printf("Volte sempre!\n");
            break;

        case 2:
            r = n1 - n2;
            printf("O resultado de %i - %i � igual a %i\n", n1, n2, r);
            printf("-----------------------------\n");
            printf("Volte sempre!\n");
            break;

        case 3:
            r = n1 * n2;
            printf("O resultado de %i * %i � igual a %i\n", n1, n2, r);
            printf("-----------------------------\n");
            printf("Volte sempre!\n");
            break;

        case 4:
            r = (float) n1 / (float) n2;
            printf("O resultado de %i / %i � igual a %i\n", n1, n2, r);
            printf("-----------------------------\n");
            printf("Volte sempre!\n");
            break;

        default:
            printf("Erro!");
    }


}
