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