/*
  Autor:DONIZETE CRISOSTOMO BARBOSA
  Analise e Desenvolvimento de Sistemas
  Faculdade de Tecnologia de Ribeir˜ao Preto
  Linguagem de programação

  Escreva um programa de criptografia que tenha as seguintes funções:

  1 - Ler arquivo texto (original ou criptografado).
  2 - Criptografar
  3 - Descriptografar
  9 - Sair

Você poderá utilizar um algoritmo de criptografia de sua preferência (a ser pesquisado de acordo com o seu interesse).
*/


#include<iostream>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>


using namespace std;

int main()
{
    //Variaveis de entrada quantidade de caracter
    char textoDigitado[1000],textoCarregado[5000];
    int i,tamanho,op,arquivo;

    do
    {
        //Menu de opçoes
        system("cls");
        cout << "\t* * * * *   M E N U    * * * * *\n\n\n";
        cout << "\n1 - DIGITE SEU TEXTO";
        cout << "\n2 - CARREGAR SEU TEXTO";
        cout << "\n3 - CRIPTOGRAFAR";
        cout << "\n4 - DESCRIPTOGRAFAR";
        cout << "\n9 - SAIR: ";
        cout<<"\n\nDIGITE UMA  OPCAO: ";
        cin >> op;

        //switch case para escolha da opção
        switch (op)
        {
        //variavel de entrada para palavras
        case 1 :
            system("cls");
            cout << "Digite seu texto:" << endl;
            cin>>textoDigitado;
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<""<<endl;


            system("pause");
            break;

        case 2:
            system("cls");
            //declaracão varialvel do tipo ponteiro
            FILE *arquivo;
            //retorna arquivo e necessario deixar um arquivo .txt junto ao arquivo cpp para executar o programa carregado
            arquivo = fopen("texto.txt","r");
            //null quando o arquivo nao foi aberto
            if (arquivo==NULL)
            {
                printf("\nATENCAO!!! Problema ao abrir o arquivo\n\n");
                printf("OBS: TALVEZ O ARQUIVO .TXT NAO ESTEJA JUNTO AO ARQUIVO CPP\n\n\n ");
                return 0;
            }
            //pegando os caracteres lidos no textos pegando caracter por caracter
            char textoCarregado[5000];
            for (i=0; !feof(arquivo); i++)
                textoCarregado[i]=fgetc(arquivo);
            fclose(arquivo);
            printf("\n%s",textoCarregado);
            cout<<""<<endl;
            cout<<""<<endl;
            cout<<""<<endl;
            system("pause");

            break;

        case 3 :
            system("cls");
            cout << "CRIPTOGRAFAR\n\n\n";
            //retorna um inteiro o comprimento da string
            tamanho = strlen(textoCarregado);

            //criptografando o texto carregado
            for(i=0; i<tamanho; i++)
                textoCarregado[i]=textoCarregado[i]+3;
            cout <<"\n\n"<<textoCarregado << "\n\n\n\n";

            tamanho = strlen(textoDigitado);
            //criptografando o texto digitado
            for(i=0; i<tamanho; i++)
                textoDigitado[i]=textoDigitado[i]+3;
            cout<<"\n\n"<<textoDigitado<<"\n\n\n";
            cout << "\n\nTexto criptografado  com sucesso!!\n\n";

            system("pause");
            break;

        case 4:
            system("cls");
            cout<<"DESCRIPTOGRAFADO\n\n";
            //retorna um inteiro o comprimento da string
            tamanho = strlen(textoCarregado);
            //descriptografando texto carregado
            for (i=0; i<tamanho; i++)
                textoCarregado[i]=textoCarregado[i]-3;
            cout<<"\n\n"<<textoCarregado<<"\n\n";

            tamanho = strlen(textoDigitado);
            //descriptografando texto digitado
            for (i=0; i<tamanho; i++)
                textoDigitado[i]=textoDigitado[i]-3;
            cout <<"\n\n"<<textoDigitado<<"\n\n";
            system("pause");
            break;

        }

    }
    while(op!=9);
    return 0;
}












