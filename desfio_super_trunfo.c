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

}