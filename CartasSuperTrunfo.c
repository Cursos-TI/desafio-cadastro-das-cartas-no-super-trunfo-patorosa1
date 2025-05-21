#include <stdio.h>
int main()
{
    int populacao = 621863;
    int turismo = 15;
    float area_em_km = 192746;
    float PIB = 3500000;

    char estado [] = "Minas gerais";
    char codigo_da_carta [] = "A01";
    char nome_da_cidade []= "contagem";

    printf("Carta 1 \n");
    printf("Codigo da carta: %s\n" , codigo_da_carta);
    printf("Estado: %s\n", estado);   
    printf("Cidade: %s\n" , nome_da_cidade);
    printf("populacao: %d\n" ,populacao);
    printf("turismo: %d\n" , turismo);
    printf("area em km: %.2f\n" , area_em_km);
    printf("PIB: %.2f\n" , PIB);

    printf("\n");


    int Populacao2 = 1774718;
    int turismo2 = 20;
    float area_em_km2 = 434892;
    float PIB2 = 4990702;

    char estado2 [] = "parana";
    char codigo_da_carta2 [] ="A02";
    char nome_da_cidade2 [] = "curitiba";

    printf ("carta 2 \n");
    printf("codigo da carta: %s\n", codigo_da_carta2);
    printf("estado: %s\n", estado2);
    printf("cidade: %S\n", nome_da_cidade2);
    printf("populacao: %d\n", Populacao2);
    printf("turismo: %d\n",turismo2);
    printf("area em km: %.2f\n", area_em_km2);
    printf("PIB: %.2f\n" , PIB2);




    return 0;
}