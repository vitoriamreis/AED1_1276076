/* --------------------------------------------------------------------------
Disciplina  : Algortimo e Estrutura de Dados 2026S1
Nome        : Vitoria Mota Reis
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 23/08/2026
Objetivo    : Exibir o menor valor de um vetor e sua posição
Dificuldade : 
Uso de IA   : indicar melhorias 
-------------------------------------------------------------------------- */


#include <stdio.h>

int main (){
    int N;
    scanf("%d", &N);

    int X[N];
    for (int i=0; i<N; i++){
        scanf("%d", &X[i]);
    }

    int menor = X[0];
    int p = 0;

    for(int i=0; i<N; i++){
        if(X[i] < menor){
            menor = X[i];
            p = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", p);

    return 0;
}
