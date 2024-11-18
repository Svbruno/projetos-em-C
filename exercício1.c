#include <stdio.h>
#include <stdbool.h>

//Bruno Veronesi Silvestre

bool primo(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int somaPrimos(int n) {
    int count = 0;
    int num = 2;
    int soma = 0;
    while (count < n) {
        if (primo(num)) {
            soma += num;
            count++;
        }
        num++;
    }
    return soma;
}

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);
    
    int resultado = somaPrimos(N);
    printf("A soma dos %d primeiros números primos é: %d\n", N, resultado);
    
    return 0;
}