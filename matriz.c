#include <stdio.h>

void input (int matriz [10] [10] ){
    int i; //linha 
    int j; //coluna 


    for (i =  0; i < 10; i++)
        for (j = 0; j < 10; j++)
        {
            printf("Digite o valor da posição da matriz[%d][%d]:", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    
}

void mostrar (int matriz [10] [10]) {
    int i; //linha
    int j; //coluna

    for (i = 0; i < 10; i++){
        for(j = 0; j < 10; j++)
            printf("%3d", matriz [i][j]);

            printf("\n");
    }
}

int main (void){
    int matriz[10][10];
    input(matriz);
    mostrar(matriz);
    
    return 0;
}