#include "bib.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 


float calcularCustoDia(float turista, Cidade *cidade) {
    float custoTotal = cidade->preco_ida_volta + cidade->preco_almoco + cidade->preco_lembrancinhas + cidade->custo_pontos_turisticos;
    if (turista == 1) {
        printf("Custo de um dia de passeio em %s: %.2f\n", cidade->nome, custoTotal);
    } else {
        custoTotal = (custoTotal * turista) - cidade->preco_lembrancinhas - cidade->preco_ida_volta;
        printf("Custo de um dia de passeio em %s: %.2f\n", cidade->nome, custoTotal);
    }
    return custoTotal;}


float calcularPrecoMedioGasto(float turista, Cidade *cidades, int num_cidades) {
    float total = 0;

       for (int i = 0; i < num_cidades; i++) {
        total += calcularCustoDia(turista, &cidades[i]);
    }

    float media = total / num_cidades;
 printf("Preco medio de gasto em todas as cidades: %.2f\n", media);

    return media;
}


void mostrarDiferencaPrecos(Cidade cidades[], int num_cidades) {
    for (int i = 0; i < num_cidades - 1; i++) {
        for (int j = i + 1; j < num_cidades; j++) {
            printf("Diferencas de preco entre %s e %s:\n", cidades[i].nome, cidades[j].nome);

                        if (cidades[i].preco_almoco != cidades[j].preco_almoco) {
                printf(" - Preco do almoco: %s tem %.2f, enquanto %s tem %.2f\n", cidades[i].nome, cidades[i].preco_almoco, cidades[j].nome, cidades[j].preco_almoco);
            }

          
            if (cidades[i].preco_lembrancinhas != cidades[j].preco_lembrancinhas) {
                printf(" - Preco de lembrancinhas: %s tem %.2f, enquanto %s tem %.2f\n", cidades[i].nome, cidades[i].preco_lembrancinhas, cidades[j].nome, cidades[j].preco_lembrancinhas);
            }

            if (cidades[i].custo_pontos_turisticos != cidades[j].custo_pontos_turisticos) {
                printf(" - Custo dos pontos turisticos: %s tem %.2f, enquanto %s tem %.2f\n", cidades[i].nome, cidades[i].custo_pontos_turisticos, cidades[j].nome, cidades[j].custo_pontos_turisticos);
            }

            printf("\n");
        }
    }
}

void atualizarCidade(Cidade *cidade, const char *nome, float preco_ida_volta, float preco_almoco, float preco_lembrancinhas, float custo_pontos_turisticos) {
 
    strncpy(cidade->nome, nome, sizeof(cidade->nome) - 1);
    cidade->nome[sizeof(cidade->nome) - 1] = '\0';

    cidade->preco_ida_volta = preco_ida_volta;
    cidade->preco_almoco = preco_almoco;
    cidade->preco_lembrancinhas = preco_lembrancinhas;
    cidade->custo_pontos_turisticos = custo_pontos_turisticos;
}


void printCidades(Cidade* vetCidade, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Cidade: %s\n", vetCidade[i].nome);
        printf(" - Preco ida e volta: %.2f\n", vetCidade[i].preco_ida_volta);
        printf(" - Preco almoco: %.2f\n", vetCidade[i].preco_almoco);
        printf(" - Preco lembrancinhas: %.2f\n", vetCidade[i].preco_lembrancinhas);
        printf(" - Custo pontos turisticos: %.2f\n\n", vetCidade[i].custo_pontos_turisticos);
    }
}


Cidade* criaVetorCidades(int tamanho) {
    Cidade* novoVetor = (Cidade*)malloc(tamanho * sizeof(Cidade));
    if (novoVetor == NULL) {
        fprintf(stderr, "Erro ao alocar memoria.\n");
        exit(EXIT_FAILURE);
    }
    return novoVetor;
}


Cidade* alteraNumeroCidades(Cidade* vetCidade, int tamanho, int alteraTamanho) {
    Cidade* novoVetor = (Cidade*)realloc(vetCidade, (tamanho + alteraTamanho) * sizeof(Cidade));
    if (novoVetor == NULL) {
        fprintf(stderr, "Erro ao realocar memoria.\n");
        free(vetCidade);
        exit(EXIT_FAILURE);
    }
    return novoVetor;
}


