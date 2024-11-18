#include <stdio.h>

// bruno veronesi silvestre
int menorNumero(int num1, int num2, int num3) {
    int menor = num1; 

    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3; 
    }
    return menor;
}

int main() {
    int numero1, numero2, numero3;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);
    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &numero3);

    int menor = menorNumero(numero1, numero2, numero3);

    // Exibe o menor número
    printf("O menor número é: %d\n", menor);

    return 0;
}
