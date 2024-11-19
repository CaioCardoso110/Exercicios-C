#include <stdio.h>
#include <locale.h>

int opcao;
float preco, novopreco;

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o preço de um produto R$");
    scanf("%f", &preco);
    printf("\n\t   ESCOLHA UM PERÍODO\n");
    printf("\t======================\n");
    printf("\t1\tCarnaval [+10]\n");
    printf("\t2\tFérias Escolares [+20]\n");
    printf("\t3\tDia das Crianças [+5]\n");
    printf("\t4\tBlack friday [-30]\n");
    printf("\t5\tNatal [-5]\n");
    printf("\t======================\n");
    printf("\tDigite sua opção => ");
    scanf("%i", &opcao);

    switch (opcao) {
    case 1:
        novopreco = (preco * 10 / 100) + preco;
        printf("\n--------------------------------------------\n");
        printf("Na época de CARNAVAL, o preco do produto vai para R$%.2f", novopreco);
        printf("\n--------------------------------------------\n");
        break;

    case 2:
        novopreco = (preco * 20 / 100) + preco;
        printf("\n--------------------------------------------\n");
        printf("Na época de FÉRIAS ESCOLARES, o preco do produto vai para R$%.2f", novopreco);
        printf("\n--------------------------------------------\n");
        break;

    case 3:
        novopreco = (preco * 5 / 100) + preco;
        printf("\n--------------------------------------------\n");
        printf("Na época de DIA DAS CRIANÇAS, o preco do produto vai para R$%.2f", novopreco);
        printf("\n--------------------------------------------\n");
        break;

    case 4:
        novopreco = preco - (preco * 30 / 100);
        printf("\n--------------------------------------------\n");
        printf("Na época de BLACK FRIDAY, o preco do produto vai para R$%.2f", novopreco);
        printf("\n--------------------------------------------\n");
        break;

    case 5:
        novopreco = preco - (preco * 5 / 100);
        printf("\n--------------------------------------------\n");
        printf("Na época de NATAL, o preco do produto vai para R$%.2f", novopreco);
        printf("\n--------------------------------------------\n");
        break;

    default:
        printf("\n--------------------------------------------\n");
        printf("Em épocas assim, mantenha o preço em R$%.2f", preco);
        printf("\n--------------------------------------------\n");
        break;

    }

    printf("VOLTE SEMPRE");






}
