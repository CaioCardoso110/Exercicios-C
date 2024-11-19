#import <stdio.h>
#import <locale.h>

char l;
char a;
char c;

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< Ex008 - Alfabeto >>>\n\n");
    printf("Digite uma letra: ");
    l = getchar();
    a = l - 1;
    c = l + 1;
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.\n", l, a, c);

}
