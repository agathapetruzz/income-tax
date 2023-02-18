#include<stdio.h> //bibliotecas
#include<stdlib.h>
int main()
{
    float Valor,IR,SF;  //variaveis

    printf(" Salario do trabalhador: ");
    scanf("%f",&Valor); //input

    if(Valor< 1903.98) //se menor que 1903.98
    {
        printf("\n IMPOSTO = R$0,00 "); //imposto que sera cobrado
        printf("\n O SALARIO FINAL SERA = R$%.2f \n\n",Valor); //valor do salario total ja com o desconto
    }

    else if( Valor< 2826.65)
    {
        IR=((Valor*0.075)-142.80);
        printf("\nIMPOSTO = R$%.2f ",IR);
        printf("\n O SALARIO FINAL SERA: = R$%.2f \n\n",Valor-IR);
    }

    else if( Valor< 3751.05)
    {
        IR=((Valor*0.15)-354.80);
        printf("\n IMPOSTO = R$%.2f",IR);
        printf("\n O SALARIO FINAL SERA: = R$%.2f \n\n",Valor-IR);
    }

    else if( Valor< 4664.68)
    {
        IR=((Valor*0.225)- 636.13);
        printf("\n IMPOSTO = R$%.2f ",IR);
        printf("\n O SALARIO FINAL SERA = R$%.2f \n\n",Valor-IR);
    }

    else   //caso maior que 4664.68
    {
        IR=((Valor*0.275)-869.36);
        printf("\n IMPOSTO = R$%.2f ",IR);
        printf("\n O SALARIO FINAL SERA = R$%.2f \n\n",Valor-IR);

    }
    return 0;
}
