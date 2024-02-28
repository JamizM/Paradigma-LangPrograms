#include <stdio.h>

int main()
{
    float x, y;
    float soma, multiplicacao, divisao, subtracao, media_real;
    int media_aritmetica_inteira;

    printf("Digite um valor para x: ");
    scanf("%f", &x);

    printf("Digite um valor para y: ");
    scanf("%f", &y);

    soma = x + y;
    divisao = x / y;
    multiplicacao = x * y;
    media_real = (x + y) / 2.0;
    media_aritmetica_inteira = (int)((x + y) / 2); 

    printf("\nSoma: %.2f\n", soma);
    printf("Divisao: %.2f\n", divisao);
    printf("Multiplicacao: %.2f\n", multiplicacao);
    printf("Media Aritmetica Real: %.2f\n", media_real);
    printf("Media Aritmetica Inteira: %d\n", media_aritmetica_inteira);

    //jogar no OnlineGDB se caso não der certo -> https://www.onlinegdb.com
    return 0;
}