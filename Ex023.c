#include <stdio.h>
#include <locale.h>

int n1;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Me diga um n�mero e eu te direi se\nele � POSITIVO, NEGATIVO ou NULO.\n\n");
    printf("Digite um n�mero: ");
    scanf("%i", &n1);
    if (n1>0){
        printf("O valor %i digitado � POSITIVO.", n1);
    } else {
        if (n1<0) {
            printf("O valor %i digitado � NEGATIVO.", n1);
        }else {
            printf("O valor %i digitado � Nulo", n1);
    }
}

}
