/*
4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:

SP – R$67.836,43
RJ – R$36.678,66
MG – R$29.229,88
ES – R$27.165,48
Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    //declaração das variáveis
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.53;
    float outros = 19849.53;

        //cálculo do total
        float total = sp + rj + mg + es + outros; 

        //cálculo das porcentagens
        float percentual_sp = (sp / total) * 100;
        float percentual_rj = (rj / total) * 100;
        float percentual_mg = (mg / total) * 100;
        float percentual_es = (es / total) * 100;
        float percentual_outros = (outros / total) * 100;

        //resultados
        printf("\n\n----------------------------Percentual de representação dos estados----------------------------");
        printf("\nSP: %.2f%%", percentual_sp);
        printf("\nRJ: %.2f%%", percentual_rj);
        printf("\nMG: %.2f%%", percentual_mg);
        printf("\nES: %.2f%%", percentual_es);
        printf("\nOutros: %.2f%%", percentual_outros);        

    return 0;
}