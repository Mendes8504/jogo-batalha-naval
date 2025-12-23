# 🚢 Batalha Naval: Lógica de Matrizes em C

> Algoritmo desenvolvido em Linguagem C para simulação e renderização de um tabuleiro de Batalha Naval, focado em manipulação de arrays bidimensionais.

![Badge C](https://img.shields.io/badge/Linguagem-C-blue?style=for-the-badge&logo=c)
![Badge Status](https://img.shields.io/badge/Status-Concluído-green?style=for-the-badge)

## 💻 Sobre o Projeto

Este código foi desenvolvido como um exercício prático de **Lógica de Programação** e **Estrutura de Dados**. O objetivo é gerenciar um tabuleiro 10x10 onde navios são posicionados e exibidos ao usuário.

O projeto destaca a diferença entre a **persistencia de dados** (salvar o navio na memória/array) e a **renderização visual** (desenhar o navio na tela baseado em condições lógicas).

## ⚙️ Funcionalidades e Lógica

O algoritmo opera em três etapas principais:

1.  **Inicialização do Grid:**
    * Criação de uma matriz 10x10.
    * Limpeza da memória, definindo todas as posições como `0` (Água).

2.  **Posicionamento de Navios (Back-end):**
    * Uso de laços `for` para inserir navios horizontalmente e verticalmente diretamente na estrutura de dados (atribuindo o valor `3`).

3.  **Renderização Condicional (Front-end no Console):**
    * Geração dinâmica de cabeçalhos (Letras A-J) e índices laterais (0-9).
    * **Lógica Mista de Exibição:** Durante a varredura da matriz para impressão, o código exibe tanto os navios salvos na memória quanto navios "fantasmas" nas diagonais, gerados através de cálculo de coordenadas (`i == j` ou `i + j == 9`).

---

## 🧩 Trecho de Código em Destaque

Abaixo, a lógica que decide o que imprimir na tela. Note o uso de condicionais para desenhar navios diagonais em tempo de execução:

```c
// Exibição da matriz e lógica de renderização
for (int i = 0; i < linha; i++){
    printf("%d |", i);
    for (int j = 0; j < coluna; j++){
        
        // Lógica para Diagonal Principal (Navio Fantasma)
        if (i == j && i < 3){
            printf(" 3");
            
        // Lógica para Diagonal Secundária (Navio Fantasma)
        } else if(i + j == 9 && i > 6){
            printf(" 3");
            
        // Exibe o que está salvo na memória (Água ou Navios Fixos)
        } else{
            printf(" %d", matriz[i][j]);
        }
    }
    printf("\n");
}
