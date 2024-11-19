#import <stdio.h>
#import <locale.h>

float nota1, nota2, media;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex012 - Situação do Aluno >>>\n\n");
    printf("Primeira nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("A média do aluno foi %.1f\n", media);
    printf("A sua situação é %s.\n", (media>=5)?"APROVADO":"REPROVADO");


}
