#include <stdio.h>
//bruno veronesi silvestre
void exibirPares(int numero) {
    for (int i = 2; i <= numero; i++) {
        if (i % 2 == 0) {  
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    exibirPares(numero);

    return 0;
}
