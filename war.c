// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
//        
// ============================================================================
//
// OBJETIVOS:
// - Modularizar completamente o código em funções especializadas.
// - Implementar um sistema de missões para um jogador.
// - Criar uma função para verificar se a missão foi cumprida.
// - Utilizar passagem por referência (ponteiros) para modificar dados e
//   passagem por valor/referência constante (const) para apenas ler.
// - Foco em: Design de software, modularização, const correctness, lógica de jogo.
//
// ============================================================================

#include <stdio.h>

#include <string.h>




 struct war
{
    char nome[50];
    char cor [50];
    int tropas;
};

int main(){
    
    struct war terreno[5]; // Vetor para armazenar 5 territórios 

    int i;



     // Laço para entrada dos dados dos 5 territórios
    for ( i=0;i < 5 ;i++){
           
        printf("Territorio %d \n",1+i);
        // Entrada do nome do território
         printf("\nDigite o nome do territorio: ");
         scanf("%s",&terreno[i].nome);
        // Entrada da cor do exército
         printf("\nDigite a cor das tropas (ex =azul, vermelhor): ");
         scanf("%s",&terreno[i].cor);

        // Entrada da quantidade de tropas
         printf("\nDigite a quantidade de tropas: ");
         scanf("%d",&terreno[i].tropas);

       
    



   

    }
    
    // Exibição dos dados cadastrados
printf("\n=== TERRITORIOS CADASTRADOS ===\n");
    for ( i=0;i < 5 ;i++){ 
        printf("===========================================");
        printf("\nTERRITORIOS %d" ,1+i);
        printf("\nNome:%s",terreno[i].nome);
        printf("\nCor:%s",terreno[i].cor);
        printf("\nQuantidade de tropas :%d",terreno[i].tropas);
        printf("===========================================");
        








        }
   
   
   
















    return 0;
}





