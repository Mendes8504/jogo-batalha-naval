#include <stdio.h>
#define linha 10
#define coluna 10

int main(){

    int matriz [10][10];//Definindo o tamanho da matriz

    //Definindo o valor de zero para toda a matriz
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            matriz[i][j] = 0;
    }}
        
    //defenindo o lugar do navio na vertical
    for(int i = 7; i < 10; i++){
            matriz[i][9] = 3;
    }

    //Defenindo o lugar do navio na horizontal
    for (int i = 4; i < 7; i++){
            matriz[4][i] = 3;
    }
        

     //exibição das letras
    printf("   "); //espaçamento para ajustar as letras com a matriz
    for (char letra = 'A'; letra <= 'J'; letra++){
        printf(" %c", letra);
    }
        
        printf("\n");//quebra de linha para deixar matriz abaixo das letras

    //Exibição da matriz com os locais dos navios
    for (int i = 0; i < linha; i++){
        printf("%d |", i);
    for (int j = 0; j < coluna; j++){
        if (i == j && i < 3){
            printf(" 3");
    } else if(i + j == 9 && i > 6){
            printf(" 3");
    } else{
            printf(" %d", matriz[i][j]);
    }}
            printf("\n");
    }
        
    
    
return 0;
}