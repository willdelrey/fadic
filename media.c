#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota1, nota2, nota3, media;


    printf("Digite suas notas: \n");
    scanf("%f%f%f",&nota1, &nota2, &nota3);
   
   media= (nota1 + nota2 + nota3) / 3;
   
   printf("Sua media e: %2.f", media);












    return 0;
}
