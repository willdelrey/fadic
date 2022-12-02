#include<stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{       //laço for
        int cont, idade, acmidade=0;
        float media;

        for (cont = 0; cont < 5; cont++)
        {
           printf("digite a %da idade: ", (cont+1));
           scanf("%d", &idade);

           acmidade+=idade;  
        }
        media=acmidade/cont;

        printf("a media de idades eh %.2f", media);

    



   
    return 0;
}

