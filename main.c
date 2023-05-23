#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int v=0;
	char input;
	while(v == 0){
		printf("Pedra papel ou tesoura?");
		scanf("%s",&input);
		 
		 //...
		 
		 
		printf("Deseja jogar denovo?(0=sim,1=nao): ");
        scanf("%d", &v);
		
	
	}
		
	return 0;
}
