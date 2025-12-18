#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Função para o programa preencher a matriz automaticamente
void preencher_matriz_automatico(int linhas, int colunas, int matriz[linhas][colunas]){
    int temp;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = rand() % 10;
        }
    }
}

//Função para o usuário preencher a matriz
void preencher_matriz_manual(int linhas, int colunas, int matriz[linhas][colunas]){
    int temp;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("\nDIGITE O ELEMENTO [%d][%d] DA MATRIZ: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

//Função para imprimir a matriz na tela
void imprimir_matriz(int linhas, int colunas, int matriz[linhas][colunas]){
    printf("\nMATRIZ GERADA:\n");
    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
}

//Função para calcular a soma da diagonal principal
void diagonal_principal(int linhas, int colunas, int matriz[linhas][colunas]){
    int diagonal = 0, temp;
    printf("\nSOMA DA DIAGONAL PRINCIPAL:\n");
    for(int i = 0; i < linhas; i++){
        temp = matriz[i][i];
        diagonal+= temp;
    }
    printf("\n%d", diagonal);
}

//Função para calcular a soma da diagonal secundaria
void diagonal_secundaria(int linhas, int colunas, int matriz[linhas][colunas]){
    int diagonal_secundaria = 0, temp;
    printf("\nSOMA DA DIAGONAL SECUNDARIA:");
    for(int i = linhas-1;i >= 0; i--){
        temp = matriz[i][colunas - 1 - i];
        diagonal_secundaria += temp;
    }
    printf("\n%d", diagonal_secundaria);
}

//Função para calcular e exibir a matriz transposta
void matriz_transposta(int linhas, int colunas, int matriz[linhas][colunas]){
    int transposta[colunas][linhas];
    printf("\nMATRIZ TRANSPOSTA:\n");
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            transposta[j][i] = matriz[i][j];
        }
    }

    for(int i = 0; i < colunas; i++){
        for(int j = 0; j < linhas; j++){
            printf(" %d", transposta[i][j]);
        }
        printf("\n");
    }

}

//Função para exibir o menu de opções
void exibir_menu(){
    printf("\n=============== MENU ===============\n");
    printf("\n1 - Preencher matriz manualmente");
    printf("\n2 - Preencher matriz automaticamente");
    printf("\n3 - Exibir matriz");
    printf("\n4 - Exibir matriz transposta");
    printf("\n5 - Soma da diagonal principal");
    printf("\n6 - Soma diagonal secundaria");
    printf("\n7 - Exibir todos resultados");
    printf("\n0 - Sair\n");
    printf("\nEscolha uma opcao: ");
}

int main(){
    int linhas, colunas, opcao, matriz_preenchida = 0;

    printf("\nDIGITE O NUMERO DE LINHAS E COLUNAS DA MATRIZ (linhas, colunas): ");
    scanf("%d %d", &linhas, &colunas);

    int matriz[linhas][colunas];

    //Função que faz o controle do menu de opções e aciona as funções
    do{
        exibir_menu();
        scanf("%d", &opcao);

        switch(opcao){

            case 1:
                preencher_matriz_manual(linhas, colunas, matriz);
                matriz_preenchida = 1;
                break;

            case 2:
                srand(time(NULL));
                preencher_matriz_automatico(linhas, colunas, matriz);
                matriz_preenchida = 1;
                break;

            case 3:
                imprimir_matriz(linhas, colunas, matriz);
                break;

            case 4:
                matriz_transposta(linhas, colunas, matriz);
                break;

            case 5:
                if(linhas == colunas){
                    diagonal_principal(linhas, colunas, matriz);
                } else {
                    printf("\nNAO E POSSIVEL CALCULAR A DIAGONAL");
                }
                break;

                case 6:
                if(linhas == colunas){
                    diagonal_secundaria(linhas, colunas, matriz);
                } else {
                    printf("\nNAO E POSSIVEL CALCULAR A DIAGONAL");
                }
                break;

            case 7:
                imprimir_matriz(linhas, colunas, matriz);

                matriz_transposta(linhas, colunas, matriz);

                if(linhas == colunas){

                    diagonal_principal(linhas, colunas, matriz);

                    diagonal_secundaria(linhas, colunas, matriz);

                } else {
                    printf("\nNAO E POSSIVEL CALCULAR AS DIAGONAIS");
                }
                break;
        
        }

    } while(opcao != 0);

    return 0;

}
    
    