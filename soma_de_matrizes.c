#include <stdio.h>
#include <stdlib.h>
int main() {

    int L , C , linha = 0 , coluna = 0;
    float soma = 0;
    printf("\nDigite o numero de linhas da matriz: ");
    scanf("%d",&L);
    printf("\nDigite o numero de colunas da matriz: ");
    scanf("%d",&C);
    float matriz[L][C];


    for(linha = 0; linha < L; linha++){
        for(coluna = 0; coluna < C; coluna++){
            printf("\nDigite o %d valor para a %d linha: ",coluna + 1, linha + 1);
            scanf("%f",&matriz[linha][coluna]);
            soma = soma + matriz[linha][coluna];

        }
    }

    for (linha = 0; linha < L; linha++){
        for(coluna = 0; coluna < C; coluna++){
            printf("%5.2f ",matriz[linha][coluna]);
        }
            printf("\n\n");
    }



    printf("\n\nA soma total eh  %5.2f\n\n\n",soma);

    system("pause");
    return 0;
}
