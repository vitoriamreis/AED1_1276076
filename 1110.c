/* --------------------------------------------------------------------------
Disciplina  : Algortimo e Estrutura de Dados 2026S1
Nome        : Vitória Mota Reis
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1110
Data        : 21/09/2026
Objetivo    : Jogar fora o primeiro elemento e pegar o próximo elemento e colocar no final.
Dificuldade : Uso de ponteiro de ponteiro **
Uso de IA   : Corrigir erros e guiar na implementação do código.
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *prox;
};

void inserir(struct No **inicio, struct No **fim, int valor) {
    struct No *novo = malloc(sizeof(struct No));

    novo->valor = valor;
    novo->prox = NULL;

    if (*inicio == NULL) {
        *inicio = novo;
        *fim = novo;
    } else {
        (*fim)->prox = novo;
        *fim = novo;
    }
}

int remover(struct No **inicio, struct No **fim) {
    struct No *aux;
    int valor;

    aux = *inicio;
    valor = aux->valor;

    *inicio = (*inicio)->prox;

    if (*inicio == NULL) {
        *fim = NULL;
    }

    free(aux);

    return valor;
}

int main() {
    int n;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        struct No *inicio = NULL;
        struct No *fim = NULL;
        for (int i = 1; i <= n; i++) {
            inserir(&inicio, &fim, i);
        }

        printf("Discarded cards:");

        int primeira = 1;

        while (inicio != fim) {
            int descartada;

            descartada = remover(&inicio, &fim);

            if (primeira) {
                printf(" %d", descartada);
                primeira = 0;
            } else {
                printf(", %d", descartada);
            }

          
            int carta = remover(&inicio, &fim);
            inserir(&inicio, &fim, carta);
        }

        printf("\nRemaining card: %d\n", inicio->valor);

        free(inicio);
    }

    return 0;
}
