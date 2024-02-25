/*5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char *entrada();
void inverter(char p[]);

int main() {
    setlocale(LC_ALL, "Portuguese");
    char *p;

    p = entrada();
    inverter(p);

    free(p);  // Liberar a memória alocada pela função entrada

    return 0;
}

char *entrada() {
    char *p = (char *)malloc(46 * sizeof(char)); 

    printf("Digite uma palavra: ");
    scanf("%45s", p); 

    return p;
}

void inverter(char p[]) {
    int i, aux, fim, tam = strlen(p);

    fim = tam - 1;
    for (i = 0; i < tam / 2; i++) {
        aux = p[i];
        p[i] = p[fim];
        p[fim] = aux;
        fim--;
    }

    printf("\n%s", p);
}