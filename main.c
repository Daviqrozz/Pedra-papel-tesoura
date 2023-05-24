#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LENGTH 100

int main(void)
{
	char valor[MAX_LENGTH]="sim";

	char input[MAX_LENGTH];
	int jogador;
	char cpu[MAX_LENGTH];
	
	 srand(time(NULL));
	
	//1 = Pedra
	//2 = papel
	//3 = Tesoura
	 valor[strcspn(input, "\n")] = '\0';
	
	while(strcmp(valor,"sim")){
	printf("Pedra,Papel ou Tesoura?");
    fgets(input, MAX_LENGTH, stdin);


    input[strcspn(input, "\n")] = '\0';

    if (strcmp(input, "pedra") == 0) {
        printf("Você escolheu pedra.\n");
        jogador = 1;
      
    } else if (strcmp(input, "papel") == 0) {
        printf("Você escolheu papel.\n");
        jogador = 2;
       
    } else if (strcmp(input, "tesoura") == 0) {
        printf("Você escolheu tesoura.\n");
        jogador = 3;
      
    } else {
        printf("Opção inválida.\n");
        break;
    }
    
		//Sorteio da cpu
		int bot = rand() % 3 + 1;  
		
		//Logica do jogo
		if(bot == jogador ){
		    printf("Empate\n");
		}
		else if(bot == 1 && jogador == 2){
		    printf("CPU escolheu Pedra\n");
		    printf("Você perdeu!\n");
		}
		else if (bot == 1 && jogador == 3){
		    printf("CPU escolheu Pedra\n");
		    printf("Você perdeu!\n");
		}
		else if (bot == 2 && jogador == 1){
		    printf("CPU escolheu Papel\n");
		    printf("Você ganhou!\n");
		}
		else if (bot == 2 && jogador == 3){
		    printf("CPU escolheu Papel\n");
		    printf("Você ganhou!\n");
		}
		else if (bot == 3 && jogador == 1){
		    printf("CPU escolheu Tesoura\n");
		    printf("Você perdeu!\n");
		}
		else if (bot == 3 && jogador == 2){
		    printf("CPU escolheu Tesoura\n");
		    printf("Você ganhou!\n");
		}
		
        //Encerrar o loop
		printf("Deseja jogar denovo?(sim ou nao): ");
		
		fgets(valor, MAX_LENGTH, stdin);
		valor[strcspn(input, "\n")] = '\0';
		if (valor != "sim")
		break;
        }
        
        
    printf("PROGRAMA ENCERRADO!");
    return 0;  
	}

