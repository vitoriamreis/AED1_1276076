/* --------------------------------------------------------------------------
Disciplina  : Algortimo e Estrutura de Dados 2026S1
Nome        : Vitória Mota Reis
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1002
Data        : 24/09/2026
Objetivo    : Encontrar a area do circulo
Dificuldade : 
Uso de IA   : 
-------------------------------------------------------------------------- */

#include <stdio.h>
 
int main() {
 
   double raio, A;
   
   scanf("%lf", &raio);
   
   A = 3.14159*raio*raio;
   
   printf("A=%.4lf\n",A);
 
    return 0;
}
