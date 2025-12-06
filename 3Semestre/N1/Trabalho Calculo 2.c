#include <stdio.h>
#include <math.h> // Para funções matemáticas, embora não estritamente necessário para T(x,y) linear

// Definição da função de temperatura T(x,y)
// T(x,y) = 60 - 4x^2 - 3y^2 + xy
double calcularTemperatura(double x, double y) {
    return 60.0 - (4.0 * x * x) - (3.0 * y * y) + (x * y);
}

// Função principal para simular o monitoramento do chip
int main() {
    double coord_x, coord_y;
    double temperatura_calculada;

    printf("--- Monitoramento Termico do Chip FireCore X1 ---\n");
    printf("Empresa: TermoTech Solutions para NeuralNode AI\n\n");

    // Loop para simular o monitoramento contínuo
    while (1) {
        printf("Digite a coordenada X do ponto a ser monitorado (em cm, ex: 0.0): ");
        if (scanf("%lf", &coord_x) != 1) {
            printf("Entrada invalida. Por favor, digite um numero.\n");
            // Limpa o buffer de entrada para evitar loop infinito em caso de erro
            while (getchar() != '\n'); 
            continue;
        }

        printf("Digite a coordenada Y do ponto a ser monitorado (em cm, ex: 0.0): ");
        if (scanf("%lf", &coord_y) != 1) {
            printf("Entrada invalida. Por favor, digite um numero.\n");
            // Limpa o buffer de entrada
            while (getchar() != '\n'); 
            continue;
        }

        temperatura_calculada = calcularTemperatura(coord_x, coord_y);

        printf("\n");
        printf("=============================================\n");
        printf("DEBUG: Calculando temperatura para x=%.2f, y=%.2f\n", coord_x, coord_y);
        printf("Temperatura Prevista no Ponto (%.2f, %.2f): %.2f C\n", coord_x, coord_y, temperatura_calculada);

        // Classificação da temperatura
        if (temperatura_calculada >= 55.0) { // Limiar de superaquecimento (exemplo)
            printf("STATUS: SOBREAQUECIDO! Acao de Manutencao Recomendada!\n");
        } else if (temperatura_calculada >= 40.0) {
            printf("STATUS: MODERADO. Monitoramento Continua.\n");
        } else {
            printf("STATUS: OTIMO. Operacao Estavel.\n");
        }
        printf("=============================================\n\n");

        printf("Pressione 's' para sair ou qualquer outra tecla para continuar monitorando: ");
        char choice;
        // Limpa o buffer de entrada antes de ler a próxima escolha
        while (getchar() != '\n'); 
        scanf("%c", &choice);
        if (choice == 's' || choice == 'S') {
            break;
        }
    }

    printf("\nMonitoramento encerrado. TermoTech Solutions agradece!\n");

    return 0;
}