#include <stdio.h>
//bruno veronesi silvestre
//dificuldades: montar e usar a struct
typedef struct {
    double peso;
    int idade;
    double altura;
} pessoa;

void imprimePessoa(pessoa p) {
    printf("Peso: %lf. Idade: %d. Altura: %lf.\n\n", p.peso, p.idade, p.altura);
}

void leDadosPessoa(pessoa *p) {
    printf("Digite o peso: ");
    scanf("%lf", &p->peso);
    printf("Digite a idade: ");
    scanf("%d", &p->idade);
    printf("Digite a altura: ");
    scanf("%lf", &p->altura);
}

int main() {
    pessoa pessoas[5];

    for (int i = 0; i < 5; i++) {
        printf("Pessoa %d:\n", i + 1);
        leDadosPessoa(&pessoas[i]);
    }

    if (pessoas[0].idade > 20)
        pessoas[0].idade++;

    for (int i = 0; i < 5; i++) {
        imprimePessoa(pessoas[i]);
    }

    return 0;
}







