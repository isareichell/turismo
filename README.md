Projeto: Calculadora de Média de Gastos para Turismo

Descrição

Este projeto em C permite calcular a média de gastos necessária para visitar uma cidade turística, considerando despesas como transporte, alimentação e lazer, além da relação da quantidade de turistas. O objetivo é ajudar viajantes a planejarem seus orçamentos de forma eficiente.

Funcionalidades

Entrada de informações sobre cidades e seus custos

Cálculo do custo de um dia de passeio em cada cidade

Cálculo da média de gastos em todas as cidades

Exibição das diferenças de preço entre cidades

Consideração da quantidade de turistas

Interface simples via terminal

Como Usar

Compile o programa usando um compilador C, como gcc:

gcc -o media_gastos index.c bib.c -Wall

Execute o programa:

./media_gastos

O programa irá criar um conjunto de cidades com informações pré-definidas e calcular os custos.

Veja o resultado com a média de gastos por dia e as diferenças de custos entre as cidades.

Exemplo de Entrada e Saída

Saída esperada:

Cidade: Gramado
 - Preco ida e volta: 100.00
 - Preco almoco: 40.00
 - Preco lembrancinhas: 160.00
 - Custo pontos turisticos: 50.00
 - Quantidade de turistas: 5
...

Custos de um dia de passeio em cada cidade:
Custo de um dia de passeio em Gramado: 350.00
...

Preco medio gasto em todas as cidades:
Preco medio de gasto em todas as cidades: 320.00

Diferencas de precos entre cidades:
Diferencas de preco entre Gramado e Santo Amaro:
 - Preco do almoco: Gramado tem 40.00, enquanto Santo Amaro tem 30.00
...

Requisitos

Compilador C (GCC, Clang, etc.)

Sistema operacional compatível (Windows, Linux, macOS)

Estrutura do Projeto

O projeto é dividido nos seguintes arquivos:

index.c: Arquivo principal que inicializa as cidades e chama as funções de cálculo.

bib.c: Implementação das funções que calculam custos e mostram diferenças entre cidades.

bib.h: Definição da estrutura Cidade e protótipos das funções.

Autor

Desenvolvido por Isadora Reichel
