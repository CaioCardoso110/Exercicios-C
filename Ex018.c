#include <stdio.h>
#include <locale.h>
#include <time.h>

int ano, idade;

void main(){
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time (&t);
    struct tm* data;
    data = localtime(&t);
    int atual = data->tm_year + 1900;
    printf("Atualmente estamos no ano de %i.\n", atual);
    printf("Em que ano você nasceu? ");
    scanf("%i", &ano);
    idade = atual - ano;
    printf("--------------------------------------\n");
    printf("Sua idade atual é %i anos.\n", idade);
    if (idade>=18){
        printf("Já fez 18 anos. Espero sinceramente que você tenha se alistado");
    } else {
        printf("Você ainda não tem 18 anos. Não pode se alistar.");
    }




}
