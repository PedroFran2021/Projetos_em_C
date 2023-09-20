#include <stdio.h>
#include <stdlib.h>

int main() {
int *array, n = 5, novo_n, i;

// Alocação dinâmica de memória usando malloc
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
                printf("\n\nDigite o novo tamanho do array: ");
                scanf("%d", &novo_n);

// Realocar o array para o novo tamanho
        array = (int *) realloc(array, novo_n * sizeof(int));
            if (array == NULL) {
                printf("Falha na realocação de memória.\n");
                return 1;
}

// Agora você pode usar 'array' com o novo tamanho
        for(i = 0; i < novo_n; i++)
            printf("\n%d", array[i]);

// Liberar a memória alocada com realloc quando não for mais necessária
        free(array);
            return 0;
}