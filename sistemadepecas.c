#include <stdio.h>

int main(int argc, char const *argv[])
{
    int quantpec, quantvendas, compvend, total, decisao = 1;

    printf("######## BEMVINDO #########\n");
    printf("quantas pecas voce possui no estoque? \n");
    scanf("%d", &quantpec);
   
    while (decisao == 1)
    {
        printf("Digite 1 para comprar pecas: \n Digite 2 para vender pecas:\n ");
        scanf("%d", &compvend);
        if (compvend == 1)
        {
            
            printf("Quantas pecas voce deseja comprar? \n");
            scanf("%d", &quantvendas);
            total = quantpec + quantvendas;
            printf(" O saldo final de pecas no estoque e: %d\n", total);
        }
        if (compvend == 2)
        {
            printf("quantas pecas deseja vender?\n ");
            scanf("%d", &quantvendas);
            total = quantpec - quantvendas;
            printf("o saldo final de pecas no estoque e: %d\n", total);
        }
        if (compvend != 1 && compvend != 2)
        {
            printf(" este valor nao e permitido\n");
        }

        printf("deseja continuar? \ndigite 1 para sim\ndigite 2 para nao\n");
        scanf("%d", &decisao);

        if (decisao == 1 && compvend == 1)
        {
            quantpec = quantpec + quantvendas;
            total = quantpec;
        }
        if (decisao == 1 && compvend == 2)
        {
            quantpec = quantpec - quantvendas;
            total = quantpec;
        }

        if (decisao != 1)
        {
            printf("sistema encerrado o total de pecas no estoque e: %d\n", total);
        }
    }   


return 0;
}