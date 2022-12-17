//**********MÉDIA DAS NOTAS-SIMPLES***********

//MÉDIAS DAS MINHAS NOTAS NA UNIVERSIDADE

#include <stdio.h>

int main(){
    float  p1,p2,p3,tpa1,tpa2,tpa3,atv1,atv2,atv3,m_t1,m_t2,m_t3,m_a1,m_a2,m_a3,u1,u2,u3,media_f,nota_pf,media_pf;

    //PROVAS E.E 1,2 E 3:
    /*printf("Opa, Me informe seu nome por favor... \n\n\n\n");*/
    printf("\n Por favor, digite suas 3 notas em ordem das unidades:\n\nPrimeira Unidade:");
    scanf("%f", &p1);
    printf("\nSegunda Unidade:");
    scanf("%f", &p2);
    printf("\nTerceira Unidade:");
    scanf("%f", &p3);

    //TPAs das 3 unidades:
    printf("\n Por favor, digite suas notas dos TPAs desse periodo:\n\nPrimeira Unidade:");
    scanf("%f", &tpa1);
    printf("\nSegunda Unidade:");
    scanf("%f", &tpa2);
    printf("\nTerceira Unidade:");
    scanf("%f", &tpa3);
//media tpa
    m_t1 = (1.5*tpa1)/10;
    m_t2 = (1.5*tpa2)/10;
    m_t3 = (1.5*tpa3)/10;

    //ATIVIDADE DE AULA das 3 unidades:
    printf("\n Por favor, digite suas notas dos exercicios desse periodo:\n\nPrimeira Unidade:");
    scanf("%f", &atv1);
    printf("\nSegunda Unidade:");
    scanf("%f", &atv2);
    printf("\nTerceira Unidade:");
    scanf("%f", &atv3);
//media atv
    m_a1 = (1.5*atv1)/10;
    m_a2 = (1.5*atv2)/10;
    m_a3 = (1.5*atv3)/10;

    //Media das unidades

    u1=(m_t1+p1+m_a1);
    u2=(m_t2+p2+m_a2);
    u3=(m_t3+p3+m_a3);
    
    //Média final 
    media_f=(u1+u2+u3)/3;

    if (media_f >= 7.00)// aprovado caso > 7.00
        {
        printf("\nEsta aprovado!");
        printf("\nA média das suas três notas foi: %.2f", media_f);
        }
    else if (media_f < 7.00 && media_f >= 3)//Final se entre 7 e 3
    { 
        printf("\n\nUfa! Você vai ter uma ultima chance, sua nota final ficou %.2f. Prova Final!\n", media_f);
        printf("\n*Digite a nota da prova final: ");
        scanf("%f", &nota_pf);
      //média da prova final
    media_pf = (media_f + nota_pf)/2;
      
        if (media_pf >= 5)// Se nota da prova final >=5
        {
            printf("\nVocê Conseguiu se recuperar, e ficou com a média final :\n\n %.2f", media_pf);
        }
        else //Se nota da prova final não >=5 
        {
            printf("Infelizmente não deu. Sua média após a final foi: %.2f", media_pf);
        }
    }//Caso media final seja <3
    else
        {
        printf("\nLamento mas você está reprovado(a)!");
        printf("\nA média das suas três notas foi: %.2f", media_f);
        }
    return 0;
}
