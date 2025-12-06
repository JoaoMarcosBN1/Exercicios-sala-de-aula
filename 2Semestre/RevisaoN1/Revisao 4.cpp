//Joao Marcos Barbosa Nogueira
//4. As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$ 0,25 se forem compradas pelo menos doze. Escreva um programam que leia o número de maçãs compradas, calcule e escreva o valor total da compra.

#include <stdio.h>
#include <locale.h>

main (){
    setlocale(LC_ALL, "portuguese");

    float valor, quantidade;

    printf("Quantas maçãs você comprou?\n");
    scanf("%f", &quantidade);

    if(quantidade < 12){
        valor = quantidade * 0.30;
        printf("O total foi de: %.2f", valor);
    } else if (quantidade > 12){
        valor = quantidade * 0.25;
        printf("O total foi de: %.2f", valor);
    }
}