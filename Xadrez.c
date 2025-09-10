#include <stdio.h>

//O enunciado inicial diz para escolher um nivel, mas como já vi todo o conteudo antes de começar a programar... Um pouco de cada no codigo para garantir

//Funções de recursividade do Avançado

void movimentarBispo(int casas) { //void pois não precisa retornar um valor //casas: paramentro para movimento
    if (casas == 0) return;       // Return+ void= interromper a execução da função
    printf("Cima + Direita\n");   //impressão do movimento
    movimentarBispo(casas - 1);  //recursiva: A cada vez que mover uma casa ele diminui o valor até chegar a zero encerrando a função
}

// Recursão - Torre
//mover a Torre para a Direita
void movimentarTorre(int casas) { //void pois não precisa retornar um valor //casas: paramentro para movimento
    if (casas == 0) return;       // Return+ void= interromper a execução da função
    printf("Direita\n");
    movimentarTorre(casas - 1); //recursiva: A cada vez que mover uma casa ele diminui o valor até chegar a zero encerrando a função
}

// Recursão - Rainha
void movimentarRainha(int casas) {//void pois não precisa retornar um valor //casas: paramentro para movimento
    if (casas == 0) return;       // Return+ void= interromper a execução da função
    printf("Esquerda\n");           
    movimentarRainha(casas - 1);  //recursiva: A cada vez que mover uma casa ele diminui o valor até chegar a zero encerrando a função
}

int main() {
    // Constantes para numerar quantos movimentos cada peça terá 
    const int MovimentoBispo = 5;
    const int MovimentoTorre = 5;
    const int MovimentoRainha = 8;

    //Bispo: 5 casas na diagonal superior direita
    //Torre: 5 casas para a direita
    //Rainha:8 casas para a esquerda



    //Peça: Bispo // Movimento: Diagonal Superior Direita 5 casas = imprimir Cima + direita)
    
    printf("Movimentação Bispo: Diagonal Superior Direita:\n"); //imprime na tela qual movimento a peça fará seguida pela quantidade de movimentos/casas percorridas pela peça
    for (int i = 1; i <= MovimentoBispo; i++) {
        printf("Cima + Direita\n");
    }
    printf("\n");

    //Peça: Torre //Movimento: Direita 5 casas
    
    printf("Movimentação Torre: 5 casas para a direita:\n"); //imprime na tela qual movimento a peça fará seguida pela quantidade de movimentos/casas percorridas pela peça
    for (int i = 1; i <= MovimentoTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Rainha (8 casas para a esquerda)
   
    printf("Movimentação Rainha: 8 casas para a esquerda:\n");//imprime na tela qual movimento a peça fará seguida pela quantidade de movimentos/casas percorridas pela peça
    for (int i = 1; i <= MovimentoRainha; i++) {
        printf("Esquerda\n");
    }
    printf("\n");

    //Aventureiro: Cavalo com loop
    //O cavalo deve se movimentar para baixo e para a esquerda, usando pelo menos duas estruturas de repetição: uma DEVE ser FOR e a outra PODE ser while ou do-whil
    
    printf("Movimentação Cavalo - Formato de L para baixo e esquerda:\n");

    for (int i = 1; i <= 2; i++) {    //for (inicialização; condição; incremento) // loop externo usando FOR para controlar os movimento para baixo
    printf("Baixo\n");             //incrementa enquanto valor não chegar ao desejado. Neste caso 2 casas
        int j = 1;
        while (j <= 1) {  //executa apenas uma vez garantido o formato L  //Loop interno usando while. Mover uma vez para esquerda após o FOR mover para Baixo 
            if (i == 2) { // executa APÓS o i ter movido 2 vezes para baixo
            printf("Esquerda\n");
            }
            j++; //incremento 
    }

}  

printf("\n"); // espaçamento entre movimento do cavalo e bispo, Ao usar o mesmo no código do Cavalo gerava uma impressão feia com espaços em branco entre: baixo e Baixo

//Para o desafio final, as peças que utilizam loops simples terão seus códigos trocados por funções recursivas, e 
//a movimentação do cavalo utilizará loops com variáveis múltiplas e/ou condições múltiplas, permitindo o uso de continue e break.

//Movimentação das Peças:
//Bispo: 5 casas na diagonal direita para cima 
//Torre: 5 casas para a direita 
//Rainha: 8 casas para a esquerda 
//Cavalo: 1 vez em L para cima à direita 
   

    //Recusão //Peça:Bispo 
    printf("Movimentação Bispo: 5 casas para Diagonal Superior Direita\n"); //print na tela do usuário
    movimentarBispo(5); //nome da função
    printf("\n");//espaçamento na impressão. Melhor Clareza na leitura + Estético

    //Recusão //Peça:Torre
    printf("Movimentação Torre: 5 casas para Direita\n");
    movimentarTorre(5); //nome da função
    printf("\n"); //espaçamento na impressão

    //Recusão //Peça:Rainha
    printf("Movimentação Rainha: 8 casas para Esquerda \n");
    movimentarRainha(8); //nome da função
    printf("\n");//espaçamento na impressão

    // Peça: Cavalo   //Movimento: 2 para cima + 1 para direita
    // Loop+ variavel
    
    
    
    
     printf("Movimentação Cavalo: (Formato de L) 2 casas para cima e uma casa 1 para direita:\n");

    for (int i = 1, j = 0; i <= 2 || j < 1; ) {  // i: Movimentos para cima  // j:Para direita   //For:(inicialização; condição; incremento) i:menor ou iggual2 ||=OU J menor que 1
            if (i <= 2) { //Para cima
            printf("Cima\n");
            i++;          // incrementa o movimento para cima
            continue;     // pula resto do loop
        }
        if (j < 1) { //Para direita
            printf("Direita\n");
            j++;          // incrementos que garantem a não repetição
            break;        // encerra código após formar o L
        }
    }

    printf("\n\n"); //espaçamento, pura estética

    return 0;


    }
