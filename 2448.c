/* --------------------------------------------------------------------------
Disciplina  : Algortimo e Estrutura de Dados 2026S1
Nome        : Vitória Mota Reis
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2448
Data        : 24/09/2026
Objetivo    : Aplicar a busca binaria para descobir quanto tempo o carteiro demora para fazer suas entregas
Dificuldade : exemplificar as posiveis posições do carteiro dentro do codigp
Uso de IA   : Indicar erros e mostrar como corrigir os problemas.
-------------------------------------------------------------------------- */


#include <stdio.h>

int buscaBinaria(int casas[], int n, int valor) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (casas[meio] == valor) {
            return meio;
        }

        if (casas[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    return -1;
}

int main() {
    int N, M;

    scanf("%d %d", &N, &M);

    int casas[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &casas[i]);
    }

    int posicaoAtual = 0;
    long long tempo = 0;

    for (int i = 0; i < M; i++) {
        int encomenda;

        scanf("%d", &encomenda);

        int novaPosicao = buscaBinaria(casas, N, encomenda);

        if (novaPosicao > posicaoAtual) {
            tempo += novaPosicao - posicaoAtual;
        } else {
            tempo += posicaoAtual - novaPosicao;
        }

        posicaoAtual = novaPosicao;
    }

    printf("%lld\n", tempo);

    return 0;
}

