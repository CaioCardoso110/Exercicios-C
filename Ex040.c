#include <stdio.h>
#include <locale.h>
#include <string.h>

int idade, soma = 0, velho,  nova, contador;
char nome[20], nomevelho;
char sexo;
float media;

void main(){
    setlocale(LC_ALL, "Portuguese");
    for (contador = 1; contador <= 4; contador++)
    {
        printf("\n----- %i° PESSOA -----\n", contador);
        printf("Nome: ");
        fflush(stdin);
        scanf("%s", &nome);
        printf("Idade: ");
        fflush(stdin);
        scanf("%i", &idade);
        printf("Sexo [M/F]: ");
        fflush(stdin);
        scanf("%c", &sexo);
        soma += idade;
    }
    if (sexo == 'M'){
            if (idade > velho) {
                velho = idade;
                strcpy(nomevelho, nome);
            }
    }
    media = (float) soma / 4;
    printf("A media de idade do grupo é de %.1f anos\n", media);
    printf("O homem mais velho tem %i anos e se chama %s.", velho, nomevelho);



}

