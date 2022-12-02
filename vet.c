#include <stdio.h>

void somaprod(int a, int b, int* c, int* d){ 
            *c=a+b;
            *d=a*b;
}

int main(int argc, char const *argv[])
{  
        int m, n;

        printf("%d, %d\n", m, n);
        somaprod(4, 6, &m, &n);
        printf("%d, %d\n", m, n);






    return 0;
}
