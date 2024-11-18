#include <stdio.h>
int main() {
int matriz[3] [5];
int points = 0;
int ganhador = 0;
int PontuacaoJogador = 0;

for(int i = 0; i < 3; i++){
    printf("pontuação jogador %d:", i++);
    for (int j = 0; j < 5; j++){
        scanf("%d", &matriz[i] [j]);
    }
}
printf("Pontuação dos jogadores: \n");
for(int i = 0; i < 3; i++){
    for(intj = 0; j < 5; j++){
        PontuacaoJogador =+ matriz[i] [j];
        if(PontuacaoJogador > ganhador){
            gahador = PontuacaoJogador;
            points = i + 1; }}
            printf("JOgador %d", points);
}

    return 0;
}