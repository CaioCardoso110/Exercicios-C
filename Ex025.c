#include <stdio.h>
#include <locale.h>
#include <time.h>

int ano, idade, anoatual, alis, tempo, tempon;

void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm* data;
    data = localtime(&t);
    int d = data->tm_year;
    anoatual = d + 1900;
    printf("Atualmente estamos no ano de %i\n", anoatual);
    printf("Em que ano voc� nasceu? ");
    scanf("%i", &ano);
    printf("--------------------------------------\n");
    idade = anoatual - ano;
    printf("Sua idade atual � %i anos.\n", idade);
    alis = ano + 18;
    tempo = anoatual - alis;
    tempon = alis - anoatual;
    if (idade > 18) {
        printf("Seu alistamento foi em %i. J� se passaram %i anos.\n", alis, tempo);
        printf("--------------------------------------\n");
    } else if (idade < 18) {
        printf("Seu alistamento ser� em %i. Ainda faltam %i anos\n",  alis, tempon);
        printf("--------------------------------------\n");
    } else {
        printf("Voc� completa 18 anos exatamente em %i. V� se alistar!\n", anoatual);
        printf("--------------------------------------\n");
    }





}
