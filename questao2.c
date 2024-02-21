/*2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence
ou não a sequência.

IMPORTANTE:
Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int entrada();
int calculoFib(n);
void apresentacao(n, fib);

int main(){
    setlocale(LC_ALL,"Portuguese");
    int n, fib;
    
        n = entrada();
        fib = calculoFib(n);
        apresentacao(n, fib);

    return 0;
}

int entrada(){
    int n;

        printf("Por favor, digite o número desejado: ");
        scanf("%d",&n);

    return n;
}

int calculoFib(int n){
    int fib = 0, j = 1;

    while(fib < n){
        int aux = fib;
        fib = j;
        j = aux + j;
    }

    return fib == n;
}

void apresentacao(int n, int fib){
    if(calculoFib(n)){
        printf("\n%d pertence à sequência de Fibonacci! \n", n);
    }else{
        printf("\n%d não pertence à sequência de Fibonacci! \n", n);
    }
}