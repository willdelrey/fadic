#include <stdio.h>

typedef struct
{
    char nome[20];
    char cargo[20];
    char endereco[50];
    char cpf[15];
    int idade;
    float salario;
}Funcionario;

int main(int argc, char const *argv[])
{
    Funcionario employees[5];
    float total;
    printf(" CADASTRO DE FUNCIONÁRIOS \n");
    // Ler a informação de 5 funcionários em um vetor de estruturas
    for (int i = 0; i < 5; i++)
    {
        printf("Nome: ");
        fflush(stdin);
        scanf("%s", &employees[i].nome);
        printf("Cargo: ");
        fflush(stdin);
        scanf("%s", &employees[i].cargo);
        printf("Endereço: ");
        fflush(stdin);
        scanf("%s", &employees[i].endereco);
        printf("CPF: ");
        fflush(stdin);
        scanf("%s", &employees[i].cpf);
        printf("Idade: ");
        fflush(stdin);
        scanf("%d", &employees[i].idade);
        fflush(stdin);
        printf("Salário: R$");
        scanf("%f", &employees[i].salario);
        total += employees[i].salario;
        printf("---------------------------\n");
    }
    // Imprimir o nome e o salário de cada funcionário
    for (int i = 0; i < 5; i++)
    {
        printf("%s\t\tR$%.2f\n", employees[i].nome, employees[i].salario);
    }
    // Imprimir o total dos salários
    printf("---------------------------\n");
    printf("Total\t\tR$%.2f\n", total);
    return 0;
}
