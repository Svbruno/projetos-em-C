#include <stdio.h>

//Bruno Veronesi Silvestre

float mediaTurma(int numAlunos) {
    float soma = 0.0;
    float nota;
    
    for (int i = 0; i < numAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }
    
    return soma / numAlunos;
}

float mediaEscola(int numTurmas) {
    int numAlunos;
    float somaMedias = 0.0;
    
    for (int i = 0; i < numTurmas; i++) {
        printf("Digite o número de alunos da turma %d: ", i + 1);
        scanf("%d", &numAlunos);
        
        float media = mediaTurma(numAlunos);
        printf("A média da turma %d é: %.2f\n", i + 1, media);
        
        somaMedias += media;
    }
    
    return somaMedias / numTurmas;
}

int main() {
    int numTurmas;
    
    printf("Digite o número de turmas: ");
    scanf("%d", &numTurmas);
    
    float mediaGeral = mediaEscola(numTurmas);
    printf("A média geral da escola é: %.2f\n", mediaGeral);
    
    return 0;
}