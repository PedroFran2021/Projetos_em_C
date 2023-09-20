#include <stdio.h>

// Função recursiva para calcular o n-ésimo termo de Fibonacci:
int fibonacci(int n) {
// Casos base:
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
// Chamadas recursivas:
        return fibonacci(n - 1) + fibonacci(n - 2);
}
}

int main() {
int n = 5;
int resultado = fibonacci(n);

printf("O %d-ésimo termo de Fibonacci é %d\n", n, resultado);
    return 0;
}