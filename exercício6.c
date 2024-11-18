//ATENÇÃO! INTUITO DO EXERCÍCIO É ANALISAR AS FUNÇÕES DO CÓDIGO APENAS ISSO
typedef struct {
    char modelo[50];
    int ano;
    double preco;
} Carro;

Define uma estrutura chamada Carro com três membros:
modelo: Uma string de 50 caracteres para armazenar o modelo do carro.
ano: Um inteiro para armazenar o ano de fabricação do carro.
preco: Um número de ponto flutuante para armazenar o preço do carro.

void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco;
}

Função para modificar o preço de um carro:
Recebe um ponteiro para Carro e um novo preço.
Atribui o novo preço ao campo preco do carro.

void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);
    printf("Ano: %d\n", c->ano);
    printf("Preço: R$ %.2lf\n", c->preco);
}
Função para imprimir os dados de um carro:
Recebe um ponteiro para Carro.
Imprime o modelo, o ano e o preço, formatando o preço com duas casas decimais.

int main() {
    setlocale(LC_ALL, "portuguese");
    Carro carro1;
Função principal do programa:
Configura a localidade para português, permitindo formatação correta para essa língua.
Declara uma variável carro1 do tipo Carro.

    strcpy(carro1.modelo, "Xyz");
    carro1.ano = 2020;
    carro1.preco = 90000.00;

Inicializa os campos da estrutura carro1:
Copia a string "Xyz" para o campo modelo.
Define ano como 2020.
Define preco como 90000.00.


    printf("Dados antes da modificação:\n");
    imprimirCarro(&carro1);
Imprime os dados do carro antes da modificação do preço.

    modificarPreco(&carro1, 115000.00);
Chama a função modificarPreco para alterar o preço de carro1 para 115000.00.

    printf("\nDados após a modificação do preço:\n");
    imprimirCarro(&carro1);
Imprime os dados do carro após a modificação do preço.
