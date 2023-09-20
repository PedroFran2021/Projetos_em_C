#include <stdio.h>

// Função recursiva para calcular o fatorial:
int fatorial(int n) {
// Caso base:
    if (n == 0 || n == 1) {
        return 1;
        } else {
// Chamada recursiva:
        return n * fatorial(n - 1);
    }
}
int main() {
int numero = 5;
int resultado = fatorial(numero);

printf("O fatorial de %d é %d.\n", numero, resultado);
    return 0;
}