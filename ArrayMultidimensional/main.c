#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ALUNO 5
#define NOTA 3
#define ESCOLA 2
int main() 
{
	int linha, coluna, prof;
	float notas[ALUNO][NOTA][ESCOLA];
	
	//ler linha escola
	for(prof=0; prof<ESCOLA; prof++)
	{
	//ler linha 
	for(linha = 0; linha<ALUNO; linha++)
	{
		//ler coluna da linha
		for(coluna = 0; coluna<NOTA; coluna++)
		{
			//%10 + 1 insere um numero randômico de 0 a 10
			notas[linha][coluna][prof] = rand() % 10 +1;  
		}
		
	}
}
	//ler linha escola
	for(prof=0; prof<ESCOLA; prof++)
	{
		//ler a linha com informações inseridas
	for(linha = 0; linha <ALUNO; linha ++)
	{
		//ler colunas com notas inseridas 
		for(coluna = 0; coluna < NOTA; coluna ++)
		{
			//%.2f significa que para os valores que irão retornar tenham eles apenas 2 casas decimais após a virgula
			printf("%.2f \t", notas[linha][coluna][prof]);	
		}
		printf("\n");
	}
	printf("\n");
}
	
	
	
	
	//verifica todas as 3 notas de cada aluno e indica quais foram suas maiores
	float maior;
	
	for(prof=0; prof<ESCOLA; prof++)
	{
	for(linha = 0; linha<ALUNO; linha++)
	{
		maior = notas[linha][0][prof];
		for(coluna = 1; coluna<NOTA; coluna++)
		{
			if(notas[linha][coluna][prof] > maior)
				maior = notas[linha][coluna][prof];
		}
		printf("Maior do aluno %d da escola %d: %.2f \n", linha, prof ,maior); 
	}
}
		
	return 0;
}
