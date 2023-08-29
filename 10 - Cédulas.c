#include <stdio.h>

int main() {
    int valor;
    scanf("%d", &valor);  

    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    int num_cedulas = sizeof(cedulas) / sizeof(cedulas[0]);

    printf("%d\n", valor);  
    
    for (int i = 0; i < num_cedulas; i++) {
        int quantidade = valor / cedulas[i];  
        printf("%d nota(s) de R$ %d,00\n", quantidade, cedulas[i]);  
        valor %= cedulas[i];  
    }

    return 0;
}
