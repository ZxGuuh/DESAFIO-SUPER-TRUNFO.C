#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definindo a estrutura da carta
struct CartaSuperTrunfo {
 char estado[3];
 char codigo[4];
 char nomeCidade[30];
 int populacao;
 float area;
 float pib;
 int numeroPontosTuristicos;

};

int main() {
    //criando uma carta
    struct CartaSuperTrunfo carta1;

    //atribundo valores
    strcpy(carta1.estado, "DF");
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.nomeCidade, "Brasília");
    carta1.populacao = 2817381;
    carta1.area = 5760.78;
    carta1.pib = 286.94;
    carta1.numeroPontosTuristicos = 12;

    //exibindo a carta
    printf("Carta 1:\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.area);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %2f bilhões\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.numeroPontosTuristicos);

    //pausa para windows
    system("pause");

    return 0;
}