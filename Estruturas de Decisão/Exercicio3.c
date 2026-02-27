//Uma loja fornece sempre 5% de desconto para os seus
//funcionários. A loja fornece também 3% de desconto para clientes
//que comprem mais do que R$ 1.000,00.Faça um programa que
//calcule o valor total a ser pago por uma pessoa.O programa
//deverá ler o valor total da compra efetuada e um código que
//identifique se o comprador é um cliente comum (1) ou um
//funcionário (2).


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float valor, resultado;
    int validacao;
	printf("O que voce e? \n");
	printf("Para funcionario digite 1 \n");
	printf("Para cliente digite 2 \n");
	scanf("%d" ,&validacao);
	printf("digite o valor total da compra \n");
	scanf("%f" ,&valor);
	 if (validacao = 1){
		resultado = valor - (valor * 0.05);
		printf("valor e: %.2f \n", resultado);
			}
	 else if (validacao = 2 && valor>1000){
		resultado = valor - (valor * 0.03);
		printf("valor e: %.2f \n",resultado);
			}
   else{
    printf("valor e: %.f \n",valor);
		}

	system("pause");	
	return 0;
}
