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
    printf("Em que ano voc� nasceu? ");
    scanf("%i", &ano);
    idade = atual - ano;
    printf("--------------------------------------\n");
    printf("Sua idade atual � %i anos.\n", idade);
    if (idade>=18){
        printf("J� fez 18 anos. Espero sinceramente que voc� tenha se alistado");
    } else {
        printf("Voc� ainda n�o tem 18 anos. N�o pode se alistar.");
    }




}
