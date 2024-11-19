#include <stdio.h>
#include <locale.h>
float preco, desc, npreco;
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Qual foi o valor total das compras? R$");
    scanf("%f", &preco);
    printf("----------------------------------------------\n");
    printf("Você comprou R$%.2f na nossa loja.\n", preco);
    if (preco>=500){
            printf("======== ATENÇÃO ========\n");
            desc = (preco * 10 / 100);
            npreco = preco - desc;
            printf("Por fazer mais de R$500 em compras, você vai receber R$%.2f de desconto.\n", desc);
            printf("O valor a ser pago e R$%.2f! Volte sempre!\n", npreco);
            printf("----------------------------------------------\n");
    }
    if (preco < 500) {
            printf("Volte sempre!\n");
            printf("----------------------------------------------\n");
    }


}
