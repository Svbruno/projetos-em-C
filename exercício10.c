#include <stdio.h>
//Bruno veronesi silvestre
double somarValores(int *v, int tamanho) {
    double soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += v[i];
    }
    return soma;
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

    double soma = somarValores(vetor, tamanho);

    // Calcula a média dos valores
    double media = soma / tamanho;

    printf("Soma dos valores: %.2lf\n", soma);
    printf("Média dos valores: %.2lf\n", media);

    return 0;
}
