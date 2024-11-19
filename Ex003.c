#import <stdio.h>
#import <locale.h>

char nome[30];
int idade;
float peso;

void main() {

setlocale(LC_ALL, "Portuguese");

printf("EX003 - DADOS\n\n");
printf("Qual o seu nome? ");
gets(nome);
printf("Quantos anos você tem? ");
scanf("%d", &idade);
printf("Qual o seu peso? (Kg) ");
scanf("%f", &peso);
printf("-------<<<  PROCESSANDO  >>>-------\n");
printf("Muito prazer, %s. Você tem %d anos e pesa %.2f kg, correto?\n", nome, idade, peso);
printf("FIM");

}
