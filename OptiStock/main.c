#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

void produto(nome_pasta);
void estoque(nome_pasta);
void compra(nome_pasta);
void movimentacao(nome_pasta);
void retirada();
void historicoRetirada();
void tutorial();
void header();

void main(){
        setlocale(LC_ALL,"");
        header();

        int codigo;

        printf ("Bem-vindo(a)! Escolha uma das opções abaixo para prosseguir:\n");
        printf ("1 - Produtos\n");
        printf ("2 - Compras\n");
        printf ("3 - Estoque\n");
        printf ("4 - Retirar Produtos\n");
        printf ("5 - Tutorial\n");
        printf ("0 - Sair\n");
        printf("Codigo: ");
        scanf(" %d", &codigo);

          switch (codigo) {
                case 0:
                    system("cls");
                    break;
                case 1:
                    produto();
                    break;
                case 2:
                    estoque();
                    break;
                case 3:
                    compra();
                    break;
                case 4:
                    movimentacao();
                    break;
                case 5:
                    tutorial();
                    break;
                default:
                    printf("Opção inválida!\n");
                    break;

        system("cls");
        return (codigo);
          }
    }

void produto(){
    header();
    return 0;
}

void compra(){
    header();
    return 0;
}

void estoque(){
    header();
    return 0;
}

void movimentacao(){

    return 0;
}
void retirada(){
    header();

}
void historicoRetirada(){
    header();

}
void tutorial(){

    header();
    printf("Bem Vindo (a) ao OptiStock\n\n");

    printf("O programa possui 5 menus:\n");
    printf ("1 - Produtos\n");
    printf ("2 - Compras\n");
    printf ("3 - Estoque\n");
    printf ("4 - Retirar Produtos\n");
    printf ("5 - Tutorial\n");

    system("pause");
    system("cls");

    header();
    printf("Bem Vindo (a) ao OptiStock\n\n");


    printf ("1 - Produtos!\n\n");


    system("pause");
    system("cls");

    header();
    printf("Bem Vindo (a) ao OptiStock\n\n");


    printf ("2 - Compras!\n\n");


    system("pause");
    system("cls");

    header();
    printf("Bem Vindo (a) ao OptiStock\n\n");


    printf ("3 - Estoque!\n\n");


    system("pause");
    system("cls");

    header();
    printf("Bem Vindo (a) ao OptiStock\n\n");


    printf ("4 - Retirar o Produto\n\n");
    printf("Este menu serve para lançar alterações do estoque.\n");
    printf("Ao selecionar o Menu 4 - Retirar produtos, você deverá\n");
    printf("inserir o código do produto que deseja realizar retirada.\n\n");

    printf("O programa irá exibir a quantidade atual do produto,\n");
    printf("e você deverá inserir quantas unidades deseja retirar e\n");
    printf("o código do motivo que vai estar listado.\n\n");

    printf("Caso esqueça o código do produto durante a retirada, \n");
    printf("digite 0 para voltar para o menu principal\n");
    printf("e acesse o Menu 1 - Produtos, para verificar.\n\n");

    printf("Ao final da retirada, caso queira verificar se os dados\n");
    printf("estão corretos, utilize o Menu 3 - Estoque!\n\n");

    system("pause");
    system("cls");

    header();
    printf("Bem Vindo (a) ao OptiStock\n\n");


    printf ("5 - Tutorial\n\n");

    printf("Caso queira visualizar o tutorial novamente, basta acessar\n");
    printf("5 - Tutorial\n\n");

    system("pause");
    system("cls");
    main();
    return;
}

void header(){
    design(200, 170);

    gotoxy(1,1);
    printf("-----------------------------------------------------------------------------------\n");
    gotoxy(28,2);
    printf("OptiStock\n");
    gotoxy(1,3);
    printf("-----------------------------------------------------------------------------------\n");

    return;
}

void headerMovimentacao(){
    design(200, 170);

    gotoxy(1,1);
    printf("-----------------------------------------------------------------------------------\n");
    gotoxy(28,2);
    printf("OptiStock\n");
    gotoxy(1,3);
    printf("-----------------------------------------------------------------------------------\n");
    printf("Movimentação de Estoque\n");

    return;
}

void design(int height, int width) {

    int i, j;

    height /= 4;
    width /= 2;

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (i == height - 1) {
                printf("-");
            } else if (j == width - 1) {
                    printf("|");
                } else {
                        printf(" ");
                    }
        }
        printf("\n");
    }
}

//Posiciona o eixo X e Y
void gotoxy(int x, int y) {
    COORD pos = {x, y};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}
