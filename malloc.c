#include <stdio.h>
#include <stdlib.h> //malloc(), free(), srand () e rand ().
#include <time.h> //time().

int main() {
int *array, n, i;

    srand(time (NULL)); //Inicia a geração de inteiros aleatórios com uma nova semente.
    printf("Informe o tamanho do array: ");
    scanf("%d", &n);
// Alocação dinâmica de memória usando malloc:
    array = (int *) malloc(n * sizeof(int));
        if (array == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
        }
// Agora você pode usar o 'array' para armazenar dados dinamicamente.
    for(i = 0; i < n; i++)
    array[i] = rand () % 100; //Número aleatório de 0 a 99.
        for(i = 0; i < n; i++)
        printf("\n%d", array[i]);
// Liberar a memória alocada quando não for mais necessária
        free(array);
        return 0;
}