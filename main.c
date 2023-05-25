#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LENGTH 100

int main(void)
{
    char valor[MAX_LENGTH] = "sim";
    char input[MAX_LENGTH];
    int jogador;
    char cpu[MAX_LENGTH];
    
    srand(time(NULL));
    
    //1 = Pedra
    //2 = papel
    //3 = Tesoura
    valor[strcspn(valor, "\n")] = '\0';
    
    //Inicio do loop
    while(strcmp(valor, "sim") == 0)
    {
        //Escolha do usuario
        printf("Pedra, Papel ou Tesoura? ");
        //Armazenando a escolha do usuario na variavel input
        fgets(input, MAX_LENGTH, stdin);
        //Sanitizando a escolha para ficar 'pura'
        input[strcspn(input, "\n")] = '\0';
        
        //definindo a numeraçao de cada escolha
        if (strcmp(input, "pedra") == 0)
        {
            printf("Você escolheu pedra.\n");
            jogador = 1;
        }
        else if (strcmp(input, "papel") == 0)
        {
            printf("Você escolheu papel.\n");
            jogador = 2;
        }
        else if (strcmp(input, "tesoura") == 0)
        {
            printf("Você escolheu tesoura.\n");
            jogador = 3;
        }
        else
        {
            printf("Opção inválida.\n");
            continue;
        }
        
        // Sorteio da cpu
        int bot = rand() % 3 + 1;
        
        // Lógica do jogo
        //Impressão da CPU
        if (bot == jogador)
        {
            printf("Empate\n");
        }
        else if (bot == 1 && jogador == 2)
        {
            printf("CPU escolheu Pedra\n");
            printf("Você perdeu!\n");
        }
        else if (bot == 1 && jogador == 3)
        {
            printf("CPU escolheu Pedra\n");
            printf("Você perdeu!\n");
        }
        else if (bot == 2 && jogador == 1)
        {
            printf("CPU escolheu Papel\n");
            printf("Você ganhou!\n");
        }
        else if (bot == 2 && jogador == 3)
        {
            printf("CPU escolheu Papel\n");
            printf("Você ganhou!\n");
        }
        else if (bot == 3 && jogador == 1)
        {
            printf("CPU escolheu Tesoura\n");
            printf("Você perdeu!\n");
        }
        else if (bot == 3 && jogador == 2)
        {
            printf("CPU escolheu Tesoura\n");
            printf("Você ganhou!\n");
        }
        
        // Encerrar o loop
        printf("Deseja jogar novamente? (sim ou nao): ");
        fgets(valor, MAX_LENGTH, stdin);
        valor[strcspn(valor, "\n")] = '\0';
        if (strcmp(valor, "nao") == 0)
        {
            printf("PROGRAMA ENCERRADO!\n");
            break;
        }
    }
    return 0;  
}
