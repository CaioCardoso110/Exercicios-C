#import <stdio.h>
#import <locale.h>

float nota1, nota2, media;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex012 - Situa��o do Aluno >>>\n\n");
    printf("Primeira nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("A m�dia do aluno foi %.1f\n", media);
    printf("A sua situa��o � %s.\n", (media>=5)?"APROVADO":"REPROVADO");


}
