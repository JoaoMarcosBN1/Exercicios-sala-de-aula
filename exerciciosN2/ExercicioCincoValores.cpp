//João Marcos Barbosa Nogueira
//1.Escrever um algoritmo que lê 5 velores, um de cada vez, e conta quantos destes valores são negativos, escrevendo esta informação.
#include <stdio.h>
#include <locale.h>

main(){

int numero[5];

setlocale(LC_ALL, "portuguese");

for (int i = 0; i < 6; i++){    
printf("Digite um número\n");
scanf("%d", &numero[5]);

        if (numero[5] < 0) {
            printf("o número %d é negativo\n", numero[5]);
        } else {
            printf("o número não é negativo\n");
        }
    }
}