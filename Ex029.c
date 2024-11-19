#include <stdio.h>
#include <locale.h>

float peso, novopeso;
int opcao;

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Seu peso na Terra (Kg) = ");
    scanf("%f", &peso);
    printf("\n\t  ESCOLHA UM PLANETA\n");
    printf("\t======================\n");
    printf("\t1\tMercúrio\n");
    printf("\t2\tVênus\n");
    printf("\t3\tMarte\n");
    printf("\t4\tJúpiter\n");
    printf("\t5\tSaturno\n");
    printf("\t6\tUrano\n");
    printf("\t======================\n\n");
    printf("Digite sua opção => ");
    scanf("%i", &opcao);
    switch (opcao) {
    case 1:
        novopeso = peso * 0.37;
        printf("\n--------------------------------------------\n");
        printf("No planeta MERCÚRIO, seu peso seria %.2f Kg\n", novopeso);
        printf("--------------------------------------------\n");
        break;

    case 2:
        novopeso = peso * 0.88;
        printf("\n--------------------------------------------\n");
        printf("No planeta VÊNUS, seu peso seria %.2f Kg\n", novopeso);
        printf("--------------------------------------------\n");
        break;

    case 3:
        novopeso = peso * 0.38;
        printf("\n--------------------------------------------\n");
        printf("No planeta MARTE, seu peso seria %.2f Kg\n", novopeso);
        printf("--------------------------------------------\n");
        break;

    case 4:
        novopeso = peso * 2.64;
        printf("\n--------------------------------------------\n");
        printf("No planeta JÚPITER, seu peso seria %.2f Kg\n", novopeso);
        printf("--------------------------------------------\n");
        break;

    case 5:
        novopeso = peso * 1.15;
        printf("\n--------------------------------------------\n");
        printf("No planeta SATURNO, seu peso seria %.2f Kg\n", novopeso);
        printf("--------------------------------------------\n");
        break;

    case 6:
        novopeso = peso * 1.17;
        printf("\n--------------------------------------------\n");
        printf("No planeta URANO, seu peso seria %.2f Kg\n", novopeso);
        printf("--------------------------------------------\n");
        break;

    default:
        printf("\n--------------------------------------------\n");
        printf("Seu peso não pode calculado para outros planetas. Tente novamente.\n" );
        printf("--------------------------------------------\n");
        break;

    }

    printf("VOLTE SEMPRE!");

}
