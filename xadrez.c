#include <stdio.h>

int main(){
    int j = 1,x = 0;
    // mover a terre 5 casa para a direita 
    for (int i = 0;i < 5;i++){
        printf("Direita\n"); // Emprime a direção do movimento
    }
    while (j <= 7){
        // mover a Ranhia 7 casa para a esquerda
        printf("esquerda\n");// Emprime a direção do movimento
        j++;
    }
    do {// mover o bispo para direita na diagonal.
        printf("direita na diagonal\n");
        x++;
    }while(x <= 5);

    return 0;
}