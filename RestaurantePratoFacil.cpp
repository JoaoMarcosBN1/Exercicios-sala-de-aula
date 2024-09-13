#include <stdio.h>
#include <locale.h>

main(){

    int mesa, menu, opcao, bebida;
    
    printf("Digite o número da mesa:\n");
    scanf("%d", &mesa);

    printf("O cliente deseja qual opção?\n[1]Rodízio\n[2]A Lacarte\n\n");
    scanf("%d", &opcao);

    if (opcao == 1){
        printf("O cliente  da mesa %d escolheu a opção Rodízio. A comida de a bebida devem ser levas para a mesa", mesa);
    }

    else if (opcao == 2){
        printf("Qual prato do menu o cliente deseja?\n\nMENU\n\n[1]Lasanha a Bolanhesa\n[2]Frango frito com legumes\n[3]Bife a cavala\n[4]Peixe com farofa\n");
        scanf("%d", &menu);
        
        if(menu == 1){
            printf("O cliente escolheu Lasanha a bolanhesa\n");
        }
        else if(menu == 2){
            printf("O cliente escolheu Frango frito com legumes\n");
        }
        else if(menu == 3){
            printf("O cliente escolheu bife a cavalo\n");
        }
        else if(menu == 4){
            printf("O cliente escolheu Peixa com farofa\n");
        }
        else {
            printf("Nenhuma opção encontrada\n");
        }

        printf("Qual bebida o cliente deseja?\n\nMENU\n\nREFRIGERANTE\n[1]Coca-Cola\n[2]Coca-Cola Zero\n[3]Guaraná\n[4]Sprite\n\nSUCOS\n[5]Laranja\n[6]Maracujá\n[7]Água\n");
        scanf("%d", &bebida);

        if (bebida = 1){
            printf("O cliente escolheu Refrigerante Coca-Cola\n");
        }
        else if (bebida = 2){
            printf("O cliente escolheu Refrigerante Coca-Cola Zero\n");
        }
        else if (bebida = 3){
            printf("O cliente escolheu Refrigerante Guaraná\n");
        }
        else if (bebida = 4){
            printf("O cliente escolheu Refrigerante Sprite\n");
        }
        else if (bebida = 5){
            printf("O cliente escolheu Suco de Laranja\n");
        }
        else if (bebida = 6){
            printf("O cliente escolheu Suco de Maracujá");
        }
        else if (bebida = 7){
            printf("O cliente escolheu Água");
        }
        else{
            printf("Nenhuma opção encontrada\n");
        }

        printf("O cliente da mesa %d escolheu %d com %d", mesa, menu, bebida);
    }

    else{
        printf("Nenhuma opção encontrada");
    }
}