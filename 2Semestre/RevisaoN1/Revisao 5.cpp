//Joao Marcos Barbosa Nogueira
//5. Escreva um programa para ler 3 valores inteiros (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente.

#include <stdio.h>
#include <locale.h>

main (){
    setlocale(LC_ALL, "portuguese");

    int n1, n2, n3, maior;

    printf("Digite um número\n");
    scanf("%d", &n1);

    printf("Digite outro número\n");
    scanf("%d", &n2);

    printf("Digite outro número\n");
    scanf("%d", &n3);

    // Verifica se há números iguais
    if (n1 == n2 || n1 == n3 || n2 == n3) {
        printf("Os números devem ser diferentes.\n");
    }

    // Ordena os números usando o algoritmo de inserção
    if (n1 > n2) {
        maior = n1;
        n1 = n2;
        n2 = maior;
    }
    if (n2 > n3) {
        maior = n2;
        n2 = n3;
        n3 = maior;
    }
    if (n1 > n2) {
        maior = n1;
        n1 = n2;
        n2 = maior;
    }

    printf("A ordem crescente é: %d %d %d\n", n1, n2, n3);
}