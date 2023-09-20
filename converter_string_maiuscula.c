#include <stdio.h> //printf().
#include <ctype.h> //toupper().

int main() {
char texto[] = "Ana MaRia SilVa.";

printf("Texto original: %s\n", texto);
    for (int i = 0; texto[i] != '\0'; i++) {
// Converte cada caracter para maiúsculo usando toupper:
        texto[i] = toupper(texto[i]);
}
printf("Texto convertido: %s\n", texto);
    return 0;
}