#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int populacao, contador = 1, filhos, salarioA = 0;
    float salario, somaSalarios = 0, mediaSalario, mediaFilhos, maiorSalario = 0, percentualSalario;
    int somaFilhos = 0;

    printf("Digite a quantidade de pessoas empregadas na cidade\n");
    scanf("%d", &populacao);

    while (contador <= populacao) {
        printf("Digite o seu salário\n");
        scanf("%f", &salario);

        if (salario < 0) {
            printf("Salário inválido\n");
            return 0; // Encerra o programa se um salário negativo for inserido
        }

        // Acumula salários para a média
        somaSalarios += salario;

        // Conta salários menores ou iguais a R$1900
        if (salario <= 1900) {
            salarioA++;
        }

        // Verifica o maior salário
        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        printf("Digite a quantidade de filhos que você tem\n");
        scanf("%d", &filhos);
        
        // Acumula número de filhos para a média
        somaFilhos += filhos;

        contador++;
    }

    // Calcula as médias
    mediaSalario = somaSalarios / populacao;
    mediaFilhos = (float)somaFilhos / populacao;
    percentualSalario = ((float)salarioA / populacao) * 100;

    // Exibe os resultados
    printf("A média de salário da população da cidade é de %.2f\n", mediaSalario);
    printf("A média de filhos da população da cidade é de %.1f\n", mediaFilhos);
    printf("O maior salário é %.2f\n", maiorSalario);
    printf("O percentual de pessoas com salário até R$1900,00 é de %.2f%%\n", percentualSalario);

    return 0;
}
