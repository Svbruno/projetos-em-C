#include <stdio.h>

//bruno veronesi silvestre
long long multiplicarValores(int *v, int tamanho) {
    long long produto = 1; 
    for (int i = 0; i < tamanho; i++) {
        produto *= v[i];
    }
    return produto;
}

int main() {
    int tamanho;

    printf("Digite o número de elementos no vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    long long produto = multiplicarValores(vetor, tamanho);

    printf("O produto dos valores é: %lld\n", produto);

    return 0;
}
