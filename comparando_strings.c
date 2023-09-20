#include <stdio.h> //printf().
#include <string.h> //strcmp().

int main() {
char string1[] = "Olá";
char string2[] = "Mundo";

printf("\nPrimeira string: %s", string1);
printf("\nSegunda string: %s\n\n", string2);

// Compara as duas strings usando a função strcmp:
    int resultado = strcmp(string1, string2);
        if (resultado == 0) {
        printf("As strings são iguais: %s, %s\n", string1, string2);
            } else if (resultado < 0) {
        printf("A primeira deve vir antes da segunda em ordem  lexicográfica: %s, %s.\n", string1, string2);
            } else {
        printf("A segunda deve vir antes da primeira em ordem lexicográfica: %s, %s.\n", string2, string1);
}
        return 0;
}