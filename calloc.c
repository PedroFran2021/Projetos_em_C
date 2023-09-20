#include <stdio.h>
#include <stdlib.h>

int main() {
int *array, n, i;

    printf("Digite o tamanho do array: ");
    scanf("%d", &n);
// Alocação dinâmica de memória usando calloc
    array = (int *)calloc(n, sizeof(int));
    if (array == NULL) {
    printf("Falha na alocação de memória.\n");
        return 1;
        }
// Agora você pode usar 'array' para armazenar dados dinamicamente
// Todos os elementos são inicializados com zero
        for(i = 0; i < n; i++)
        printf("\n%d", array[i]);
// Liberar a memória alocada com calloc quando não for mais necessária
        free(array);
        return 0;
}