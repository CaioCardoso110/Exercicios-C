#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int d = data->tm_mday;
    int m = data->tm_mon + 1;
    int a = data->tm_year + 1900;

    printf("Estamos no dia %i do mês %i do ano %i", d, m, a);
}
