#include <stdio.h>

int main() {
    float somaLitros = 0, somaKm = 0, litros = 0, km;

    // O loop continua enquanto o valor inserido para 'litros' não for -1
    while (litros != -1) {
        printf("Entre com a quantidade de litros que abasteceu (ou -1 para terminar): ");
        scanf("%f", &litros);

        // Verifica se o usuário deseja sair antes de pedir os quilômetros
        if (litros != -1) {
            printf("Entre com a quantidade de quilometros rodados: ");
            scanf("%f", &km);

            // Acumula os totais
            somaLitros += litros;
            somaKm += km;
             printf("\nConsumo atual eh de: %f\n", somaLitros/somaKm);
        }
       
    }

    // Evita divisão por zero se nenhum dado for inserido
    if (somaLitros > 0) {
        float mediaConsumo = somaKm / somaLitros;
        printf("\n--- Resultados ---\n");
        printf("Total de litros abastecidos: %.2f L\n", somaLitros);
        printf("Total de quilômetros rodados: %.2f Km\n", somaKm);
        printf("Consumo médio: %.2f Km/L\n", mediaConsumo);
    } else {
        printf("\nNenhum dado de abastecimento foi inserido.\n");
    }

    return 0;
}


