#include <stdio.h> //printf().
#include <string.h> //strcpy().

int main() {
char origem[] = "Olá, Mundo!";
/* O tamanho da string de destino deve ser grande
* o suficiente para acomodar a string de origem.
*/
char destino[20];
// Copia a string da origem para o destino usando a função strcpy:
    strcpy(destino, origem);
// Exibe o conteúdo da string de origem:
    printf("String de origem: %s\n", origem);
// Exibe o conteúdo da string de destino:
    printf("String de destino: %s\n", destino);
        return 0;
}