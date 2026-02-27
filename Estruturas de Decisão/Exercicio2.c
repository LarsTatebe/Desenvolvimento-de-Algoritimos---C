//Escreva um programa que lê dois números e que pergunta qual a
//operação você quer realizar. Você pode escolher soma(0),
//subtração(1), multiplicação(2) ou divisão(3).Exiba o resultado da
//operação escolhida ou uma mensagem dizendo que a operação
//escolhida não é válida.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int numero1, numero2, resultado, operacao;
	printf("Qual operacao voce quer realizar? \n");
	printf("Para soma digite 1 \n");
	printf("Para subtracao digite 2 \n");
	printf("Para multiplicacao digite 3 \n");
	printf("Para divisao digite 4 \n");
	scanf("%d" ,&operacao);
	printf("digite os valores que voce quer calcular: \n");
	scanf("%d" ,&numero1);
	scanf("%d" ,&numero2);

	if(operacao == 1){
		resultado = numero1 + numero2;
		printf("o resultado e: %d.\n", resultado);
	}
	else if(operacao == 2){
		resultado = numero1 - numero2;
		printf("o resultado e: %d.\n", resultado);
	}
	else if(operacao == 3){
		resultado = numero1 * numero2;
		printf("o resultado e: %d.\n", resultado);
	}
	else if(operacao == 4){
		resultado = numero1 / numero2;
		printf("o resultado e: %d.\n", resultado);
	}
	system("pause");	
	return 0;
}
