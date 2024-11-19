#import <stdio.h>
#import <locale.h>

char nome[20];
float nota1;
float nota2;
float media;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex009 - Média do aluno >>>\n\n");
    printf("Nome do aluno: ");
    gets(nome);
    fflush(stdin);
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("O aluno %s tirou notas %.1f e %.1f e ficou com média %.1f.\n", nome, nota1, nota2, media);

}
