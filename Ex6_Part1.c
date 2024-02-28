#include <stdio.h>

int main()
{
    int temperaturaCelsius;
    float temperaturaFahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &temperaturaCelsius);

    temperaturaFahrenheit = (temperaturaCelsius * 9 / 5) + 32;
    printf("A temperatura em Fahrenheit eh: %.2f\n", temperaturaFahrenheit);

    //jogar no OnlineGDB se caso não der certo -> https://www.onlinegdb.com
    return 0;
}