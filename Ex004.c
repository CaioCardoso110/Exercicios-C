#import <stdio.h>
#import <locale.h>

char nome1[30];
char nome2[30];
char nome3[30];
char sexo1, sexo2, sexo3;
float nota1, nota2, nota3;

void main() {

    setlocale(LC_ALL, "Portuguese");

    printf("EX004 - LISTAGEM\n\n");
    printf("Cadastrando a primeira pessoa: \n");
    printf("---------------------------------- \n");
    printf("Nome: ");
    gets(nome1);
    fflush(stdin);
    printf("Sexo [M/F]: ");
    scanf("%c", &sexo1);
    fflush(stdin);
    printf("Nota: ");
    scanf("%f", &nota1);
    fflush(stdin);
    printf("\nCadastrando a segunda pessoa: \n");
    printf("---------------------------------- \n");
    printf("Nome: ");
    gets(nome2);
    fflush(stdin);
    printf("Sexo [M/F]: ");
    scanf("%c", &sexo2);
    fflush(stdin);
    printf("Nota: ");
    scanf("%f", &nota2);
    fflush(stdin);
    printf("\nCadastrando a terceira pessoa: \n");
    printf("---------------------------------- \n");
    printf("Nome: ");
    gets(nome3);
    fflush(stdin);
    printf("Sexo [M/F]: ");
    scanf("%c", &sexo3);
    fflush(stdin);
    printf("Nota: ");
    scanf("%f", &nota3);
    fflush(stdin);
    printf("\nListagem Completa\n");
    printf("----------------------------------- \n");
    printf("Nome\t\t\tSEXO\tNota\n");
    printf("%s\t\t\t%c\t%.1f\n", nome1, sexo1, nota1);
    printf("%s\t\t\t%c\t%.1f\n", nome2, sexo2, nota2);
    printf("%s\t\t%c\t%.1f\n", nome3, sexo3, nota3);
    printf("----------------------------------- \n");





}
