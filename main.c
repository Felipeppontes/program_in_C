#include <stdio.h>

int main(){
    float A,B,C,media_f;
    printf("\n Por favor, digite suas 3 notas em ordem das unidades:\nPrimeira Unidade:");
    scanf("%f", &A);
    printf("\nSegunda Unidade:");
    scanf("%f", &B);
    printf("\nTerceira Unidade:");
    scanf("%f", &C);

    media_f=(A+B+C)/3;

    if (media_f >= 7.00)
        {
        printf("\nEsta aprovado!");
        }
    else
        {
        printf("\nEsta reprovado!");
        }

    printf("\n\nA media das notas foi: %.2f", media_f);


    return 0;
}
