#include <stdio.h>
#include <stdlib.h>
#include  "ListaDinEncad.h"

int main()
{
    int matricula_aluno;
    int posicao;
    struct aluno dados_aluno;
    int opcao;
    int i = 1;


    Lista* li = cria_lista();
    libera_lista(li);

 int x = tamanho_lista();
    x = lista_vasia();
    x = insere_lista_inicio();
    x = insere_lista_final();
    x = insere_lista_ordenada();
    imprime_lista(li);
    x = remove_lista_inicio(li);
    x= remove_lista_final(li);
    x= remove_lista(li,matricula_aluno);
    x= consulta_lista_pos(li, posicao, &dados_aluno);
    x= consulta_lista_mat(li,posicao, &dados_aluno);





   while (i == 1){
    system("cls");
     menu();
     scanf("%d",&opcao);
     switch(opcao){
    case 1:
        printf("\n\nDigite a Matricula: ");
        scanf("%d", &dados_aluno.matricula);
        printf("Digite o Nome: ");
        fseek(stdin,0,SEEK_END);
        scanf("%[^\n]", dados_aluno.nome);
        printf("Digite a Nota 01: ");
        scanf("%f", &dados_aluno.n1);
        printf("Digite a Nota 02: ");
        scanf("%f", &dados_aluno.n2);
        printf("Digite a Nota 03: ");
        scanf("%f", &dados_aluno.n3);
        x(li, dados_aluno);
        break;

        case 2:
            printf("\n\nDigite a Matricula: ");
            scanf("%d", &dados_aluno.matricula);
            printf("Digite o Nome: ");
            fseek(stdin,0,SEEK_END);
            scanf("%[^\n]", dados_aluno.nome);
            printf("Digite a Nota 01: ");
            scanf("%f", &dados_aluno.n1);
            printf("Digite a Nota 02: ");
            scanf("%f", &dados_aluno.n2);
            printf("Digite a Nota 03: ");
            scanf("%f", &dados_aluno.n3);
            insere_lista_final(li, dados_aluno);
            break;

         case 3:
            printf("\n\nDigite a Matricula: ");
            scanf("%d", &dados_aluno.matricula);
            printf("Digite o Nome: ");
            fseek(stdin,0,SEEK_END);
            scanf("%[^\n]", dados_aluno.nome);
            printf("Digite a Nota 01: ");
            scanf("%f", &dados_aluno.n1);
            printf("Digite a Nota 02: ");
            scanf("%f", &dados_aluno.n2);
            printf("Digite a Nota 03: ");
            scanf("%f", &dados_aluno.n3);
            insere_lista_ordenada(li, dados_aluno);
            break;

        case 4:
                if(lista_vasia(li))
                {
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else if (remover_lista_final(li)) {
                    printf("\n\nElemento Removido com Sucesso\n\n");
                    system("pause");
                    break;
                }
                break;
                 case 5:
                if(lista_vasia(li))
                {
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else if (remover_lista_inicio(li)) {
                    printf("\n\nElemento Removido com Sucesso\n\n");
                    system("pause");
                    break;
                }
                case 6:
                if(lista_vasia(li))
                {
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\nDigite a matricula a ser removida: ");
                    scanf("%d", &matricula_aluno);
                    remover_lista(li, matricula_aluno);
                    system("pause");
                    break;
                }
                case 7:
                if(lista_vasia(li))
                {
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\nDigite a posicao a ser buscada: ");
                    scanf("%d", &posicao);
                    consultar_lista_pos(li, posicao, &dados_aluno);
                    system("pause");
                    break;
                }
                case 8:
                if(lista_vasia(li))
                {
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\nDigite a matricula a ser buscada: ");
                    scanf("%d", &matricula_aluno);
                    consultar_lista_mat(li, matricula_aluno, &dados_aluno);
                    system("pause");
                    break;
                }
        case 9:
                if(lista_vasia(li))
                {
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else {
                    imprime_lista(li);
                    system("pause");
                    break;
                }
                case 10:
                if(lista_vasia(li)){
                    printf("\n\nLista Vazia\n\n");
                    system("pause");
                    break;
                } else {
                    printf("\n\nO tamanho da Lista eh: %d\n\n", tamanho_lista(li));
                    system("pause");
                    break;
                }
                break;

    case 11:
      printf("\n\n\t\tAte Logo !!!\n\n\n\n\n");
      i = 0;
      break;

    default:
      printf("\n\nOpcao Invalida\n\n");
      system("pause");
      break;
     }




   libera_lista(li);
   system("pause");
   printf("\n\n\n\n");






}return 0;}
