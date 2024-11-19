#include <stdio.h>
#include <locale.h>

int n1;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Me diga um número e eu te direi se\nele é POSITIVO, NEGATIVO ou NULO.\n\n");
    printf("Digite um número: ");
    scanf("%i", &n1);
    if (n1>0){
        printf("O valor %i digitado é POSITIVO.", n1);
    } else {
        if (n1<0) {
            printf("O valor %i digitado é NEGATIVO.", n1);
        }else {
            printf("O valor %i digitado é Nulo", n1);
    }
}

}
