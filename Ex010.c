#import <stdio.h>
#import <locale.h>

char produto[20];
float preco;
float desc;
float npreco;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex010 - Preço do Produto >>>\n\n");
    printf("Produto: ");
    gets(produto);
    printf("Preço de %s: R$", produto);
    scanf("%f", &preco);
    printf("Desconto: (%%) ");
    scanf("%f", &desc);
    npreco = preco - (preco * desc / 100);
    printf("O produto %s custava R$%.2f, mas com %.2f%% de desconto, passa a custar R$%.2f.\n", produto, preco, desc, npreco);



}
