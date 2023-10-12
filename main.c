#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

// -------------------------------------------------- Cores
#define VERDE "\033[0;32m"
#define AMARELO "\033[0;33m"
#define VERMELHO "\033[0;31m"
#define RESET "\033[0m"
#define AZULCL "\x1B[36m"
#define AZULESC "\x1B[34m"

void produto();
void estoque();
void compra();
void retirada();
void tutorial();
void arquivo();
void header();

void main()
{
    setlocale(LC_ALL, "");

    //TELA CHEIA
    keybd_event ( VK_MENU, 0x36, 0, 0 );
    keybd_event ( VK_RETURN, 0x1C, 0, 0 );
    keybd_event ( VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0 );
    keybd_event ( VK_MENU, 0x38, KEYEVENTF_KEYUP, 0 );

    system("cls");//limpa qualquer defini��o anterior

    header();//chama o cabe�alho
    gotoxy(67, 6);// coloca o B na coluna 67 e linha 6
    printf("Bem-vindo(a)!");
    gotoxy(51, 7);// coloca o E na coluna 51 e linha 7
    printf("Escolha uma das op��es abaixo para prosseguir:\n\n");

    int opcao;// variavel que vai permitir encaminha para outros menus

    arquivo();

    do
    {
        printf("1 - Menu Produto\n");
        printf("2 - Menu Compra\n");
        printf("3 - Menu Estoque\n");
        printf("4 - Menu Retirar Produto\n");
        printf("5 - Menu Tutorial\n");
        printf("0 - Encerrar o programa\n\n");
        printf("Digite a op��o: ");
        scanf(" %d", &opcao);
        system("cls");
        header();
        gotoxy(67, 6);
        printf("Bem-vindo(a)!");
        gotoxy(51, 7);
        printf("Escolha uma das op��es abaixo para prosseguir:\n\n");
    } while (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5 && opcao != 0 );

    if(opcao == 1)//encaminha para produtos
    {
        produto();
    }
    if(opcao == 2)//encaminha para estoque
    {
        estoque();
    }
    if(opcao == 3)//encaminha para compra
    {
        compra();
    }
    if(opcao == 4)//encaminha para retirada
    {
        retirada();
    }
    if(opcao == 5)//encaminha para retirada
    {
        tutorial();
    }
    if(opcao == 0)//encerra o programa
    {
        system("cls");
        header();
        gotoxy(66, 7);
        printf(VERMELHO"Encerrando..."RESET);
        return 0;
    }
}
void produto()
{
    system("cls");
    header();

    char descricaoProduto;
    int codProduto, salva, qtdDesejada, minCritico;
    int opcao;

    gotoxy(68, 6);
    printf("Menu Produto\n");
    gotoxy(51, 7);
    printf("Escolha uma das op��es abaixo para prosseguir:\n\n");

    do
    {
        printf("1 - Procurar produto\n");
        printf("2 - Editar produto\n");
        printf("3 - Criar produto\n");
        printf("0 - Voltar menu principal\n\n");
        printf("Digite a op��o: ");
        scanf(" %d", &opcao);
        system("cls");
        header();
        gotoxy(68, 6);
        printf("Menu Produto\n");
        gotoxy(51, 7);
        printf("Escolha uma das op��es abaixo para prosseguir:\n");
    }while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 0 );

    if(opcao == 1)// procura o produto
    {
        system("cls");
        header();

        gotoxy(68, 6);
        printf("Procurar produto\n");
        printf("Entre com o c�digo do produto: ");
        scanf(" %d", &codProduto);

        if (codProduto == 1)// quando encontra o produto
        {
            printf("\nC�digo do produto: %d \n",codProduto);
            printf("Descri��o: %c\n", descricaoProduto);
            printf("Quantidade desejada: %d\n", qtdDesejada);
            printf("Minimo critico: %d\n\n",minCritico);

            do
            {
                gotoxy(51, 14);
                printf("Escolha uma das op��es abaixo para prosseguir:\n\n");
                printf("1 - Voltar ao menu principal\n");
                printf("2 - Voltar ao menu produto\n");
                printf("3 - Editar este produto\n");
                printf("0 - Fechar o programa\n\n");
                printf("Digite a op��o: ");
                scanf(" %d", &opcao);
                system("cls");
                header();
                gotoxy(68, 6);
                printf("Procurar produto\n");
            }while(opcao != 0 && opcao != 1 && opcao != 2 && opcao != 3 );

            if(opcao==1)
            {
                main();
            }
             if(opcao==2)
            {
                produto();
            }
             if(opcao==0)
            {
                system("cls");
                header();
                gotoxy(66, 7);
                printf(VERMELHO"Encerrando..."RESET);
                return 0;
            }
        }
        else//quando n�o encontra o produto
        {
            system("cls");
            header();

            do
            {
                gotoxy(65, 8);
                printf(VERMELHO"Produto n�o encontrado!\n"RESET);
                gotoxy(51, 10);
                printf("Escolha uma das op��es abaixo para prosseguir:\n\n");
                printf("1 - Procurar um produto\n");
                printf("2 - Menu produto\n");
                printf("3 - Menu principal\n");
                printf("0 - Encerrar o programa\n\n");
                printf("Digite a op��o: ");
                scanf(" %d", &opcao);
                system("cls");
                header();
            }while (opcao != 0 && opcao != 1 && opcao != 2 && opcao != 3 );

            if(opcao==1)
            {
                produto();
            }
             if(opcao==2)
            {
                produto();
            }
             if(opcao==0)
            {
                system("cls");
                header();
                gotoxy(66, 7);
                printf(VERMELHO"Encerrando..."RESET);
                return 0;
            }
        }
    }
    if(opcao == 2)// edita o produto
    {

    }
    if(opcao == 3)// cria o produto
    {
        system("cls");
        header();

        gotoxy(68, 6);
        printf("Criar produto\n");
        printf("Entre com o c�digo do produto: ");
        scanf(" %d", &codProduto);

        //fazer verifica��o se esse c�digo ja existe

        printf("\nEntre com a descri��o do produto: ");
        scanf(" %c", &descricaoProduto);

        printf("\nQuantidade desejada de estoque: ");
        scanf(" %d", &qtdDesejada);

        printf("\nM�nimo cr�tico: ");
        scanf("%d", &minCritico);

        printf("Informa��es do produto criado\n");
        printf("\nC�digo do produto: %d", codProduto);
        printf("\nDescri��o: %c", descricaoProduto);
        printf("\nQuantidade desejada no estoque: %d", qtdDesejada);
        printf("\nM�nimo cr�tico: %d", minCritico);
        printf("\n");

        printf("\nEscolha uma das op��es abaixo para prosseguir:\n");
        printf("1 - Para salvar o produto\n");
        printf("2 - Para alterar dados deste produto\n");
        printf("0 - Voltar para o menu principal sem salvar\n");
        scanf("Digite uma op��o %d", &salva);

        system("cls");
        header();

        if(salva==1)
        {
        }
        if(salva==2)
        {
        }
        if(salva==0)
        {
            main();
        }
    }
    if(opcao == 0)// volta para o menu principal
    {
        main();
    }
}
void compra()
{
    system("cls");
    header(); //Chama a fun��o que imprime o cabe�alho

    int codProduto, unidades, verifica, opcao;
    float valorUnidade;
    char descricao[50], c;

    FILE *arquivo; //Ponteiro para o arquivo estoque.txt
    arquivo = fopen("estoque.txt", "a"); //Abre o arquivo estoque.txt para escrita
    if((arquivo=fopen("estoque.txt", "a")) == NULL) //Verifica se o arquivo foi aberto
    {
        printf("O arquivo n�o pode ser aberto"); //Caso n�o tenha sido aberto, exibe a mensagem
        exit(1); //Encerra o programa
    }

    gotoxy(68, 6);
    printf("Menu Compra\n");
    gotoxy(51, 7);
    printf("Escolha uma das op��es abaixo para prosseguir:\n\n");

    //Menu de compra
    do{
        printf("1 - Entrar com uma compra\n");
        printf("2 - Verificar uma compra\n");
        printf("0 - Voltar menu principal\n");
        printf("Digite a op��o: ");
        scanf(" %d", &opcao);
        system("cls");
        header();
        gotoxy(68, 6);
        printf("Menu Compra\n");
        gotoxy(51, 7);
        printf("Escolha uma das op��es abaixo para prosseguir:\n\n");
    }while(opcao != 1 && opcao != 2 && opcao != 0);


    if(opcao == 1)//entra com a compra
    {

        do{
            printf("Entrar com a compra\n\n");
            printf("Digite o c�digo do produto: ");
            scanf(" %d",&codProduto);

            //Criar rotina para verificar se o
            //codigo do produto e valido

            printf("Descri��o do produto: ");
            //setbuf(stdin, NULL);
            scanf(" "); //Limpa o buffer do teclado substitui o setbuf
            scanf("%49[^\n]", descricao); //L� at� 49 caracteres ou at� o enter

            printf("Quantas unidades: ");
            scanf("%d",&unidades);

            printf("Qual o valor por unidade: ");
            scanf("%f", &valorUnidade);

            printf("\n C�digo: %d",codProduto);
            printf("\n Descri��o: %s",descricao);
            printf("\n Qtd.Unidades: %d",unidades);
            printf("\n Valor por unidade: %.2f",valorUnidade);

            printf("\n\n Confirma essas informa��es");
            printf("\n Digite 1 para Confirmar a compra");
            printf("\n Digite 0 para apagar os dados da compra");
            printf("\n Digite qualquer outra tecla para voltar ao menu principal: ");
            scanf("%d", &verifica);
            system("cls");

            if(verifica != 1 && verifica != 0)
            {
                main(); //Chama a fun��o main
            }
        }while(verifica != 1);

        //Grava os dados no arquivo estoque
        printf("\n Gravando dados...\n");
        system("pause");

        //fprintf escreve no arquivo apontado
        fprintf(arquivo,"\n");
        fprintf(arquivo,"\n Codigo: %d", codProduto);
        fprintf(arquivo,"\n Descricao: %s", descricao);
        fprintf(arquivo,"\n Qtd.Unidades: %d", unidades);
        fprintf(arquivo,"\n Valor por unidade: %.2f", valorUnidade);
        fclose(arquivo); //Fecha o arquivo
        printf("\n Gravado com sucesso \n"); //Exibe mensagem de sucesso
        system("PAUSE");
        printf("\n Digite 1 para entrar com mais uma compra");
        printf("\n Digite outra tecla para voltar ao menu principal: ");
        scanf("%d", &verifica);
        if(verifica != 1)
        {
            main(); //Chama a fun��o main
        }
        compra();
    }
    if(opcao == 2)// verifica compras
    {
        FILE *arquivo;
        arquivo = fopen("estoque.txt", "r"); //Abre o arquivo no modo leitura
        //La�o para ler o arquivo at� o final
        do
        {
            //faz a leitura do caracter no arquivo apontado
            c = fgetc(arquivo);

            //exibe o caracter lido na tela
            printf("%c" , c);

        }while (c != EOF); //EOF = End Of File (Fim do arquivo)
        fclose(arquivo);  //Fecha o arquivo
        printf("\n");
        system("pause");
        compra(); //Chama a fun��o compra
    }
    if(opcao == 3)// volta para o menu principal
    {
        main();
    }
    return 0;
}
void estoque()
{
    header();
    return 0;
}
void arquivo()
{
}
void retirada()
{
    system("cls");
    header();

    int codProduto, motivoRetirada, unidRetirada;
    int opcao;

    gotoxy(70, 6);
    printf("Menu Retirar Produto");
    gotoxy(51, 7);
    printf("Escolha uma das op��es abaixo para prosseguir:\n");

    do
    {
        printf("1 - Retirar Produto\n");
        printf("2 - Verificar Retirada\n");
        printf("0 - Voltar ao Menu\n");
        printf("Digite a op��o: ");
        scanf(" %d", &opcao);
        system("cls");
        header();
        gotoxy(68, 6);
        printf("Menu Retirar Produtos\n");
        gotoxy(51, 7);
        printf("Escolha uma das op��es abaixo para prosseguir:\n");
    }while(opcao != 1 && opcao != 2 && opcao != 0 );

    if (opcao == 1)// vai para retirada
    {
        system("cls");
        header();

        gotoxy(51, 7);
        printf("Retirada de Produtos\n\n");
        printf("_________________________________\n");
        printf("|  C�digos     |     Motivo     |\n");
        printf("|     1        |    Consumo     |\n");
        printf("|     2        |   Vencimento   |\n");
        printf("|     3        |     Avaria     |\n");
        printf("|     4        |   Perda/Roubo  |\n");
        printf("_________________________________\n");


        printf("Qual o c�digo do produto que deseja retirar: ");
        scanf(" %d", &codProduto);

        // verifica��o se o produto existe

        printf("Quantas unidades deseja retirar: ");
        scanf(" %d", &unidRetirada);

        //verifica��o se pode retirar aquela quantidade

        printf("Qual o c�digo do motivo da retirada: ");
        scanf(" %d", &motivoRetirada);

        //verifica��o se o motivo da retirada existe


        return;
    }
    if(opcao == 2)//mostra as retiradas ja feitas
    {
        system("cls");
        header();
    }
    if (opcao == 0)// volta para o menu principal
    {
        main();
    }
}
void tutorial()
{
    system("cls");
    header();
    gotoxy(56, 6);
    printf("Bem Vindo (a) ao Tutorial do OptiStock\n\n");

    gotoxy(62, 7);
    printf("O programa possui 5 menus:\n\n");
    printf("1 - Menu Produto\n");
    printf("2 - Menu Compra\n");
    printf("3 - Menu Estoque\n");
    printf("4 - Menu Retirar Produto\n");
    printf("5 - Tutorial\n");

    system("pause");
    system("cls");

    header();
    gotoxy(56, 6);
    printf("Bem Vindo (a) ao Tutorial OptiStock\n\n");

    gotoxy(65, 7);
    printf("1 - Menu Produto\n\n");

    system("pause");
    system("cls");

    header();
    gotoxy(56, 6);
    printf("Bem Vindo (a) ao Tutorial OptiStock\n\n");

    gotoxy(66, 7);
    printf("2 - Menu Compra\n\n");

    system("pause");
    system("cls");

    header();
    gotoxy(56, 6);
    printf("Bem Vindo (a) ao Tutorial OptiStock\n\n");

    gotoxy(65, 7);
    printf("3 - Menu Estoque\n\n");

    system("pause");
    system("cls");

    header();
    gotoxy(56, 6);
    printf("Bem Vindo (a) ao Tutorial OptiStock\n\n");

    gotoxy(60, 7);
    printf("4 - Menu Retirar o Produto\n\n");
    printf("Este menu serve para lan ar altera  es do estoque.\n");
    printf("Ao selecionar o Menu 4 - Retirar produtos, voc  dever \n");
    printf("inserir o c digo do produto que deseja realizar retirada.\n\n");

    printf("O programa ir  exibir a quantidade atual do produto,\n");
    printf("e voc  dever  inserir quantas unidades deseja retirar e\n");
    printf("o c digo do motivo que vai estar listado.\n\n");

    printf("Caso esque�a o c�digo do produto durante a retirada, \n");
    printf("digite 0 para voltar para o menu principal\n");
    printf("e acesse o Menu 1 - Produtos, para verificar.\n\n");

    printf("Ao final da retirada, caso queira verificar se os dados\n");
    printf("est�o corretos, utilize o Menu 3 - Estoque!\n\n");

    system("pause");
    system("cls");

    header();
    gotoxy(56, 6);
    printf("Bem Vindo (a) ao Tutorial OptiStock\n\n");

    gotoxy(65, 7);
    printf("5 - Menu Tutorial\n\n");

    printf("Caso queira visualizar o tutorial novamente, basta acessar\n");
    printf("5 - Tutorial\n\n");

    system("pause");
    system("cls");
    main();
    return;
}
void header()
{
    //design(200, 170);

    gotoxy(0, 0);
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------\n");
    gotoxy(69, 2);
    printf("OptiStock\n");
    gotoxy(0, 4);
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------\n");

    return;
}
/*void design(int height, int width)
{
    int i, j;

    height /= 4;
    width /= 2;

    for (i <= 0; i < height; i++)
    {
        for (j <= 0; j < width; j++)
        {
            if (i == height - 1)
            {
                printf("-");
            }
            else if (j == width - 1)
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}*/
void gotoxy(int x, int y)
{
    COORD pos = {x, y};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}
