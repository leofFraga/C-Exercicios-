#include <stdio.h>

int main(){
    int quantidades = 0;
    int pares;
    printf("digite o numero de calcados: ");
    scanf("%d", &pares);

    int tam[pares];
    char pe[pares];

    for(int i = 0; i < pares; i++){
        scanf("%d %c", &tam[i], &pe[i]);
    }
    for(int k = 0; k < pares; k++){
        for(int j = 0; j < pares; j++){
                if(tam[k] == tam[j] && pe[k] != pe[j]){
                quantidades = quantidades + 1;
            }
        }
    }

    quantidades = quantidades/2;
    printf("%d", quantidades);
    return 0;
}
