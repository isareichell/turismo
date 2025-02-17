#include "bib.h"
#include <stdio.h>

int main() {
    Cidade *cidades;

    cidades = criaVetorCidades(3);

    atualizarCidade(cidades + 0, "Gramado", 100, 40, 160, 50);
    atualizarCidade(cidades + 1, "Santo Amaro", 100, 30, 0, 50);
    atualizarCidade(cidades + 2, "Canela", 100, 40, 130, 50);
 

    cidades = alteraNumeroCidades(cidades, 3, 1);
    atualizarCidade(cidades + 3, "Santa Clara do Sul", 100, 40, 80, 50);

    printCidades(cidades, 4);

    float turista = 5;

    int num_cidades = 4;

    printf("\nCustos de um dia de passeio em cada cidade:\n");
    for (int i = 0; i < num_cidades; i++) {
        calcularCustoDia(turista, &cidades[i]);
    }

    printf("\nPreco medio gasto em todas as cidades:\n");
    calcularPrecoMedioGasto(turista, cidades, num_cidades);

    printf("\nDiferencas de precos entre cidades:\n");
    mostrarDiferencaPrecos(cidades, num_cidades);

    return 0;
}

