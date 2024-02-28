#include <stdio.h>

int main() 
{
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("O caractere digitado: ");
    putchar(caractere);

    printf("\nO codigo ASCII de '%c' eh: %d\n", caractere, caractere);

    //jogar no OnlineGDB se caso não der certo -> https://www.onlinegdb.com
    return 0;
}