// Escreva um programa que pergunte a distância que um
//passageiro deseja percorrer em km. Calcule o preço da
//passagem, cobrando R$ 0,50 por km para viagens até 200 km e
//R$ 0,45 para viagens mais longas.


#include <stdio.h>
#include <stdlib.h>

int main(void){
    float distancia,passagem;
    printf("Insira o Distancia: ");
    scanf("%f", &distancia);
	if(distancia<200){
		float passagem = 0.50 * distancia;
		printf("O valor da passagem e de: %f\n", passagem);
		}
	else{
		float passagem = 0.45 * distancia;
		printf("o valor da passagem e de: %f\n", passagem);
		}
    system("pause");
	return 0;
}