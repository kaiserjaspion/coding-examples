//
// Exemplo de utilização de switch
//

#include <stdio.h>
#include "add.h"
#include "subtract.h"

int main(){
	int op, op1, op2;
	printf("Escolha uma operação!!\n");
	printf("0 - adição\n");
	printf("1 - subtração\n"); 
	printf("2 - multiplicação\n");
	printf("3 - divisão\n");

	fflush(stdin);
	scanf("%d", &op);

	printf("Entre dois operandos separados por um espaco!!\n");
	fflush(stdin);
	scanf("%d %d", &op1, &op2);


	switch(op){
		case 0:
			printf("O resultado e: %d\n", add(op1,op2) ); //do addition
			break;	
		case 1: 
			printf("O resultado e: %d\n", subtract(op1,op2) );// do subtraction
			break;
		default:
				printf("Argumento invalido\n");
	}

	return 0;

}
