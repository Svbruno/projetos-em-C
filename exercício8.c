#include <stdio.h>
//bruno veronesi silvestre
//nao tive dificuldade nesse
double calcularMedia(double nota1, double nota2, double nota3, double nota4) {
    return (nota1 + nota2 + nota3 + nota4) / 4.0;
}

int main() {
    double nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%lf", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%lf", &nota4);

    media = calcularMedia(nota1, nota2, nota3, nota4);

    printf("Média: %.2lf\n", media);

    if (media >= 7.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
