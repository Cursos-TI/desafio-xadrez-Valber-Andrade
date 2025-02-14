#include <stdio.h> //Incluindo a biblioteca

int main() {
    //Adicionando as variaveis de incremento
    int bispo = 0; 
    int torre = 0;
    int rainha = 0;

    printf("O Bispo está se movendo na direção: \n"); //Printf para ilustrar a movimentação do Bispo

    while (bispo < 5)//enquanto o bispo for menor que 5
    {
        printf("Cima, "); printf("Direita.\n");//imprime as direções que ele vai andar
        bispo++; //bispo mais mais, para incremento nas casas
    
    }

    
    
    printf("A Torre está se movendo na direção: \n"); //Printf para ilustrar a movimentação da Torre

    do //Ira fazer o printf, enquanto o valor de torre for menor que 5
    {
        printf("Direita.\n");//imprime as direções que ela vai andar
        torre++; //torre mais mais, para incremento nas casas

    } while (torre < 5);


    printf("A Rainha está se movendo na direção: \n"); //Printf para ilustrar a movimentação da Rainha

    for (rainha = 0; rainha < 8; rainha++)//rainha igual a 0, enquanto a rainha andar menos que 8 casas, rainha++
    {
        printf("Esquerda.\n");//imprime as direções que ela vai andar
    }
    
    


    


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
