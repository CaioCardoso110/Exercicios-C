#include <stdio.h>
#include <locale.h>
#include <time.h>
int ano, idade, maioridade = 0, menoridade = 0, contador;
void main(){
    setlocale(LC_ALL, "Portuguese");

    time_t t;
    time(&t);
    struct tm* data;
    data = localtime(&t);
    int atual = data -> tm_year;


    for (contador = 1; contador <= 7; contador++) {
        printf("Em que ano a %i° pessoa nasceu? ", contador);
        scanf("%i", &ano);

        idade = (atual + 1900) - ano;

        if (idade >= 18) {
            maioridade++;
        } else {
            menoridade++;
        }
    }

    printf("\nAo todo tivemos %i pessoas maiores de idade\n", maioridade);
    printf("E também tivemos %i pessoas menores de idade", menoridade);
}
