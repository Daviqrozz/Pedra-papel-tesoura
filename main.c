#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int v=0;
	char input;
	char pedra='pedra';
	char papel='papel';
	char tesoura='tesoura';
	
	
	
	
	while(v == 0){
		printf("Pedra papel ou tesoura?");
		scanf("%s",&input);
		
		//Sorteio da cpu
		int bot = rand() % 3;  
		printf("%d\n",bot);
		
		//Comparador de string
		 if (strcmp(input, "pedra") == 1 || strcmp(input, "papel") == 0 || strcmp(input, "tesoura") == 0) {
           jogador = 1;
           printf("%d",&jogador);
			}
        
        
        
        //Encerrar o loop
		printf("Deseja jogar denovo?(0=sim,1=nao): ");
        scanf("%d", &v);
	}
	printf("PROGRAMA ENCERRADO!")
	;
	return 0;
}
