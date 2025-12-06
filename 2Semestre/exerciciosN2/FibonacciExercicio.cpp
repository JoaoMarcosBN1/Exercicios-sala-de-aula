//Joao Marcos Barbosa Nogueira
#include <stdio.h>
#include <locale.h>

main(){
	int num1, num2, res;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número\n");
	scanf("%d", &num1);
	
	printf("Digite outro número\n");
	scanf("%d", &num2);
	
	printf("\nA Sequência de Fibonacci dos números %d e %d é:\n\n", num1, num2);
	
	for (int i = 0; i < 10; i++){
		res = num1 + num2;
		printf("%d,", res);
		
		num1 = num2;
		num2 = res;
	}
		
}
