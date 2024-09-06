//Joao Marcos B Nogueira
#include <stdio.h>

main(){
	float N1,N2;
	int OP;
	printf("Digite o 1 numero \n");
	//Mensagem para o usu�rio
	
	scanf("%f", &N1);
	//Leitura dos n�meros
	//N1
	
	printf("Digite o 2 numero \n");
	scanf("%f", &N2);		
	//N2
	
	printf("Escolha a operacao [1]SOMA [2]SUBTRACAO [3]MULTIPLICACAO [4]DIVISAO  \n");
	scanf("%d", &OP);
	//OPERA��O
	
	if(OP == 1){
		printf("o resultado foi %.2f", N1+N2);
	}else if(OP == 2){
		printf("o resultado foi %.2f", N1-N2);
	}else if(OP == 3){
		printf("o resultado foi %.2f", N1*N2);
	}else if(OP == 4){
		printf("o resultado foi %.2f", N1/N2);
	}
}
