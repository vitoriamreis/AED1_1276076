/* --------------------------------------------------------------------------
Disciplina  : Algortimo e Estrutura de Dados 2026S1
Nome        : Vitória Mota Reis
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 20/09/2026
Objetivo    : Sudoku
Dificuldade : Alocar vetores
Uso de IA   : Indicar erros e mostrar como corrigir os problemas.
-------------------------------------------------------------------------- */
#include <stdio.h>

int verf_sudoku(int matriz[9][9]) {
    for (int i = 0; i < 9; i++) {
        int linhas[10] = {0};
        int colunas[10] = {0};
        for (int j = 0; j < 9; j++) {
            int valor_l = matriz[i][j];
            int valor_c = matriz[j][i];
            if (valor_l > 9 || valor_l < 1 || valor_c > 9 || valor_c < 1) {
                return 0;
            } else {
                if (linhas[valor_l] > 0 || colunas[valor_c] > 0) {
                    return 0;
                }
                linhas[valor_l] = 1;
                colunas[valor_c] = 1;
            }
        }
    }

    for (int subMatrizL = 0; subMatrizL < 9; subMatrizL += 3) {
        for (int subMatrizC = 0; subMatrizC < 9; subMatrizC += 3) {
            int matrizz[10] = {0};
            for (int lin = 0; lin < 3; lin++) {
                for (int col = 0; col < 3; col++) {
                    int num = matriz[subMatrizL + lin][subMatrizC + col];
                    if (num > 9 || num < 1 || matrizz[num] > 0) {
                        return 0;
                    }
                    matrizz[num] = 1;
                }
            }
        }
    }
    return 1;
}

int main() {
    int n;
    int sudoku[9][9];

    if (scanf("%d", &n) != 1) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                scanf("%d", &sudoku[j][k]);
            }
        }
        printf("Instancia %d\n", i + 1);
        if (verf_sudoku(sudoku) == 1) {
            printf("SIM\n\n");
        } else {
            printf("NAO\n\n");
        }
    }

    return 0;
}
