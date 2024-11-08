//Joao Marcos Barbosa Nogueira

#include <stdio.h>
#include <locale.h>
 main(){
    setlocale(LC_ALL, "portuguese");

    char opcao;

    printf("Escolha a opção que deseja:\n\n[1]0-10 Crescente\n[2]0-10 Decrescente\n[3]0-10 Crescente em pares\n[4]0-10 Crescente em ímpares\n[5]0-10 Decrescente em pares\n[6]0-10 Decrescente em ímpares\n");
    scanf("%c", &opcao);

    switch (opcao)
    {
    case 1

        break;
    case 2

        break;
    case 3

        break;
    case 4

        break;
    case 5

        break;
    case 6

        break;        
    default:
        printf("opção invalida");
        break;
    }

 }