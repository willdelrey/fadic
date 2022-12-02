#include <stdio.h>

void triangulo(int n) {
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) 
        printf("%d ", j);
        printf("\n");
    }
}

int main() {
     int n;
     printf("digite um valor ");
    scanf("%d", &n);
     scanf("%d", &n);
     triangulo(n);   
}