#import <stdio.h>
#import <locale.h>
#import <stdlib.h>
#import <time.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX005 - Ser� que voc� acerta? >>>\n\n");
    srand(time(NULL));
    int nr = rand() % 4 + 1;
    int n1;
    printf("Vou pensar em um numero entre 1 e 5. Tente adivinhar!\n");
    printf("Qual o seu palpite? ");
    scanf("%d", &n1);
    printf("Eu pensei no n�mero %d e voc� pensou no n�mero %d", nr, n1);


}
