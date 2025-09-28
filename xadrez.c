#include <stdio.h>

//Recursividade da Torre

void MoverTorre(int casa){
    if (casa > 0) {
        printf("Torre Direita\n");
        MoverTorre(casa - 1);
    }
}

//Recursividade da Rainha

void MoverRainha(int casa){
    if (casa > 0){ 
        printf("Rainha Esquerda\n");
        MoverRainha(casa - 1);
    }
}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    printf("##DESAFIO DE MOVIMENTAÇÃO DE PEÇAS DE XADREZ##\n");

    //Torre com Funções Recursivas

    MoverTorre(5);
     printf("\n");

    //Rainha com Funções Recursivas

    MoverRainha(8);
    printf("\n");

    // Bispo com loops aninhados

     for (int i = 0; i <= 4; i++)
    {   for (int i = 0; i <= 0; i++){
        printf("Bispo Cima\n");
       }
        printf("Direita\n");
    }
    printf("\n");

    //Cavalo com loops aninhados e multiplas variaveis

    int a=0;
    do{
        if(a == 2){
            printf("Cavalo Esquerda\n");
            a=a+1;
            continue;
        }
        printf("Cavalo Cima\n");
        a++;
    } while (a<=2);
     
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.

    /*int i, j;
    for(i=0; i<=2; i++){
      for(j=2; j<=2; j++){
        if(i!=j) printf("Cavalo cima\n");
        else printf("Cavalo Esquerda\n");
      }
    }*/
    

   return 0;
}
