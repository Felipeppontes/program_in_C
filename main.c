// ***********MÉDIA DAS NOTAS-SIMPLES***********

//MÉDIAS DAS MINHAS NOTAS NA UNIVERSIDADE

#include <stdio.h>

int main(){
    float f1,f2,f3,media_f;
    printf("\n Por favor, digite suas 3 notas em ordem das unidades:\n\nPrimeira Unidade:");
    scanf("%f", &f1);
    printf("\nSegunda Unidade:");
    scanf("%f", &f2);
    printf("\nTerceira Unidade:");
    scanf("%f", &f3);

    media_f=(f1+f2+f3)/3;

    if (media_f >= 7.00)
        {
        printf("\nEsta aprovado!");
        }
    else if (media_f < 7.00 && media_f >= 3){
        printf("\nUfa! Você vai ter uma ultima chance. Prova Final!");
    }
    else
        {
        printf("\nLamento mas você está reprovado(a)!");
        }
    printf("\nA média das suas três notas (1ª %.2f |2ª %.2f |3ª %.2f) foi: %.2f", f1, f2, f3, media_f);

    return 0;
}
