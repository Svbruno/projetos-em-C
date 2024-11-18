#include <stdio.h>
//bruno veronesi silvestre
int encontrarMaiorValor(int *v, int tamanho, int *maiorValor) {
    int posicaoMaior = 0;

    for (int i = 1; i < tamanho; i++) {
        if (v[i] > *maiorValor) {
            *maiorValor = v[i];
            posicaoMaior = i;
        }
    }
    return posicaoMaior;
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

    int maiorValor;
    int posicao = encontrarMaiorValor(vetor, tamanho, &maiorValor);

    printf("O maior valor é %d e está na posição %d.\n", maiorValor, posicao + 1);

    return 0;
}
