/* --------------------------------------------------------------------------
Disciplina  : Algortimo e Estrutura de Dados 2026S1
Nome        : Vitória Mota Reis
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 20/09/2026
Objetivo    : Apresentar o maior valor lido e a posição dentre os 100 valores lidos usando alocação dinâmica de vetores
Dificuldade : Ponteios
Uso de IA   : Explicar uso de ponteiros e alocação dinâmica de memória
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v;
    int maior, posicao;

    v = (int *) malloc(100 * sizeof(int));

    for(int i = 0; i < 100; i++) {
        scanf("%d", &v[i]);
    }

    maior = v[0];
    posicao = 0;

    for(int i = 1; i < 100; i++) {
        if(v[i] > maior) {
            maior = v[i];
            posicao = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao + 1);

    free(v);

    return 0;
}
