#include <stdio.h>

int main(){
\\ carta 01

char Estado[40] = "Ceara";
char codigo[5] = "A01";
char cidade[40] = "Fortaleza";
int populacao = 2428678;
float areakm = 148886;
float pib = 194885;
int pontosTuristicos = 10;

printf("Digite o nome  do Estado: \n");
scanf("%d", Estado);

printf("Digite codigo da carta: \n");
scanf("%s", &codigo);

printf("Digite o nome da Cidade: \n");
scanf("%s", &cidade);

printf("Digite a População: \n");
scanf("%d",&populacao);

printf("Digite a Área por Km²: \n");
scanf("%d", &areakm);

printf("Digite o PIB: \n");
scanf("%d", &pib);

printf("Digite os Pontos Turísticos: \n");
scanf("%d", &pontosTuristicos);

printf("Estado: %s\n", Estado);
printf("Codigo: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("Populacao: %d\n", populacao);
printf("ÁreaKm²: %d\n", areakm);
printf("PIB: %d\n", pib);
printf("Pontos Turísticos: %d\n", pontosTuristicos);

\\ carta 02






}
