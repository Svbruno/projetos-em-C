#include <stdio.h>

// bruno veronesi silvestre
float calcularMedia(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    int numero1, numero2, numero3;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);
    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &numero3);

    float media = calcularMedia(numero1, numero2, numero3);

    printf("A média dos números é: %.2f\n", media);

    return 0;
}
