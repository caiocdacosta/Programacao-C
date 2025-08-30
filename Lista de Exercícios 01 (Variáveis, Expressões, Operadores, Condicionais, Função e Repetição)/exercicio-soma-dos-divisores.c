#include <stdio.h>

// A função recebe um número inteiro 'numero' e retorna um inteiro.
int somaDivisores(int numero) {
    int soma = 0; // Variável local para a soma

    // O laço agora usa o parâmetro 'numero'
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }
    
    // Em vez de imprimir, a função retorna o valor calculado
    return soma;
}

int main() {
    int x, y;         // Variável para guardar o intervalo do usuário
    int resultado;   // Variável para guardar o resultado da função

    printf("Informe um intervalo de numeros inteiros [x, y] (onde x < y): ");
    scanf("%d %d", &x, &y);

    for (int i = x; i <= y; i++) {
    // Chama a função somaDivisores, passando 'i' como argumento
    // e guarda o valor retornado em 'resultado'
        resultado = somaDivisores(i);

    // Imprime os pares de números amigáveis
        printf("Par amigável: (%d, %d)\n", i, resultado);
    }
    return 0;
}
