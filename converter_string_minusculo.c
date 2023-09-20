#include <stdio.h> //printf().
#include <ctype.h> //tolower().

int main() {
char texto[] = "Ana MaRia SilVa.";

printf("Texto original: %s\n", texto);
    for (int i = 0; texto[i] != '\0'; i++) {
// Converte cada caracter para minúsculo usando tolower:
        texto[i] = tolower(texto[i]);
}
printf("Texto convertido: %s\n", texto);
    return 0;
}