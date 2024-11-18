#include <stdio.h>
//Bruno Veronesi Silvestre

int calculaSomatorio(int n) {
    int soma = 0;
    for (int i = 1; i <= n; i++) {
        soma += 5 * i * i + 2 * i + 8;
    }
    return soma;
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    int resultado = calculaSomatorio(n);
    printf("O resultado do somatório é: %d\n", resultado);
    
    return 0;
}