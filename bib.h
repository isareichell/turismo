#ifndef BIB_H
#define BIB_H

#define NUM_CIDADES 4

typedef struct {
    char nome[50];
    float preco_ida_volta;
    float preco_almoco;
    float preco_lembrancinhas;
    float custo_pontos_turisticos;
} Cidade;

float calcularCustoDia(float turista, Cidade *cidade);
float calcularPrecoMedioGasto(float turista, Cidade *cidades, int num_cidades);
void mostrarDiferencaPrecos(Cidade cidades[], int num_cidades);
void atualizarCidade(Cidade *cidade, const char *nome, float preco_ida_volta, float preco_almoco, float preco_lembrancinhas, float custo_pontos_turisticos);
void printCidades(Cidade* vetCidade, int tamanho);
Cidade* criaVetorCidades(int tamanho);
Cidade* alteraNumeroCidades(Cidade* vetCidade, int tamanho, int alteraTamanho);

#endif

