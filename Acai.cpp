//Joao Marcos Barbosa Nogueira
#include <stdio.h>

main(){
	int T, op1, op2, op3;
	printf("Bem vindo(a) a loja Acai Legal! \n\n");
	printf("Para prosseguir com o atendimento por favor, selecione as opcoes desejadas: \n\n");
	printf("Qual o tamanho desejado do seu ACAI?\n[1]300ML\n[2]500ML\n[3]1000ML\n");
	scanf("%d", &T);
	if(T == 1){
		printf("Voce escolheu 300ML!\n\n");
	}else if(T == 2){
		printf("Voce escolheu 500ML!\n\n");
	}else if(T == 3){
		printf("Voce escolheu 1000ML!\n\n");
	}
	//Tamanho do copo
	
	printf("Quais acompanhamentos? (VOCE TEM DIREITO ATE 3 COMPLEMENTOS)\n\n");
	printf("[1]LEITE NINHO\n[2]GRANOLA\n[3]TAPIOCA\n[4]LEITE CONDENSADO\n[5]PUDIM DO KEVEN\n");
	scanf("%d", &op1);
	if(op1 == 1){
		printf("Voce escolheu LEITE NINHO!\n\n");
	}else if(op1 == 2){
		printf("Voce escolheu GRANOLA!\n\n");
	}else if(op1 == 3){
		printf("Voce escolheu TAPIOCA!\n\n");
	}else if(op1 == 4){
		printf("Voce escolheu LEITE CONDENSADO!\n\n");
	}else if(op1 == 5){
		printf("Voce escolheu PUDIM DO KEVEN!\n\n");
	}
	//complemento 1
	
	printf("Escolha mais 2 complementos:\n");
	printf("[1]LEITE NINHO\n[2]GRANOLA\n[3]TAPIOCA\n[4]LEITE CONDENSADO\n[5]PUDIM DO KEVEN\n");
	scanf("%d", &op2);
	if(op2 == 1){
		printf("Voce escolheu LEITE NINHO!\n\n");
	}else if(op2 == 2){
		printf("Voce escolheu GRANOLA!\n\n");
	}else if(op2 == 3){
		printf("Voce escolheu TAPIOCA!\n\n");
	}else if(op2 == 4){
		printf("Voce escolheu LEITE CONDENSADO!\n\n");
	}else if(op2 == 5){
		printf("Voce escolheu PUDIM DO KEVEN!\n\n");
	}
	//complemento 2
	
	printf("Escolha mais 1 complemento:\n");
	printf("[1]LEITE NINHO\n[2]GRANOLA\n[3]TAPIOCA\n[4]LEITE CONDENSADO\n[5]PUDIM DO KEVEN\n");
	scanf("%d", &op3);
	if(op3 == 1){
		printf("Voce escolheu LEITE NINHO!\n\n");
	}else if(op3 == 2){
		printf("Voce escolheu GRANOLA!\n\n");
	}else if(op3 == 3){
		printf("Voce escolheu TAPIOCA!\n\n");
	}else if(op3 == 4){
		printf("Voce escolheu LEITE CONDENSADO!\n\n");
	}else if(op3 == 5){
		printf("Voce escolheu PUDIM DO KEVEN!\n\n");
	}	
	//complemento 3

	if(T == 1){
		printf("o preco do seu acai foi de R$15,00!\n\n");
	}else if(T == 2){
		printf("o preco do seu acai foi de R$18,00!\n\n");
	}else if(T == 3){
		printf("o preco do seu acai foi de R$25,00!\n\n");
	}
	printf("Muito obrigado pela preferencia, volte sempre!");
}

