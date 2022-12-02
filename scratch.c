#include <stdio.h>

int main(int argc, char const *argv[])
{
    float bolo=2.50, refrigerante=3.50, agua=2.00;
   char nome[20];
   char produto[20];
   int soma, quant;
    printf("#########################\n");
    printf("ola, qual seu nome?\n");
    scanf("%s", &nome);
    printf("ola, %s, seja bem vindo a lanchonte deus no ceu, nos na terra\n", nome);
    printf("esta e nossa tabela de precos:\n");
    printf("\t bolo, refrigerante, agua\n");
    printf("\t R$2.50,   R$3.50,   R$2.00 \n");
    printf("#########################\n");
    printf("qual voce quer? \n");
    scanf("%s", &produto);
    printf("quantos produtos voce deseja comprar?");
    scanf("%d", &quant);

    if (produto==agua)
    {
        soma=agua*quant;
        printf(soma);
    }
    if (produto==refrigerante)
    {
        soma=refrigerante*quant;
        printf(soma);
    }
    
    




   
    return 0;
}
