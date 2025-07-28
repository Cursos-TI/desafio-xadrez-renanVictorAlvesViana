#include <stdio.h>

void moverPeca(int numb, char nome[], char direcao[]) {
    if (numb > 0) {
        printf("%s para %s\n", nome, direcao);
        moverPeca(numb - 1, nome, direcao);
    }
}

int main() {
    int numero;
    char direcao[20];
    char peca[20];

    printf("escolhar a peça para mover!\n");
    scanf("%s",&peca);

    printf("escolhar a direção para mover a peça!\n");
    scanf("%s",&direcao);

    printf("escolhar quantas casas deseja mover a peça!\n");
    scanf("%d",&numero);



    moverPeca(numero, peca, direcao);

    return 0;
}
