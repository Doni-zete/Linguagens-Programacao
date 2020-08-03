// Autor:DONIZETE CRISOSTOMO BARBOSA

// Analise e Desenvolvimento de Sistemas
//Faculdade de Tecnologia de Ribeir˜ao Preto
// Algoritmos e Logica de Programaç˜ao

#include <iostream>

//  definido  quartoze define constante para que o valor não seja alterado
#define TOTALVAGAS 120
#define CARRO 1
#define CAMINHONETE 2
#define CARROESPORTIVO  3
#define ANDAR_UM 1
#define ANDAR_DOIS 2
#define ANDAR_TRES 3
#define ANDAR_QUATRO 4
#define ANDAR_CINCO 5
#define POSOCUPADA 0
#define POSANDAR 1
#define POSHORA 2
#define POSHORASAIDA 3
#define TIPOVEICULO 4

using namespace std;

//função posicao que o veiculo esta  as vagas o andar, e as horas de entrada e saida com as alocação na matriz
void posEstacionarVeiculo (int vagas[TOTALVAGAS][4], int vagasAndar[], int andar, int hora,int horaSaida)
{
    int posicaoVaga = 0;
    for(int i =0; i < TOTALVAGAS; i++)
    {
        if(vagas[i][POSOCUPADA] == 0)
        {
            posicaoVaga = i;
            break;
        }
    }

    vagas[posicaoVaga][POSOCUPADA] = 1;
    vagas[posicaoVaga][POSANDAR] = andar;
    vagas[posicaoVaga][POSHORA] = hora;
    vagas[posicaoVaga][POSHORASAIDA] = horaSaida;
    vagasAndar[andar]--;

    //cout para retirar o carro pela varialvel posicaoVaga
    cout<<endl<<"\tEsse e o codigo para retirar o carro: 0" <<posicaoVaga<<endl;

}

//Função apenas para mostrar a palavra "opçao"
void exibirMensagemOpcao()
{
    cout << "Opcao: ";
}

//funçao de retirada do veiculo pegando a posicao o andar
void retirarCarro(int vagas[TOTALVAGAS][4],int posicaoRetirar,int vagasAndar[])
{
    if(vagas[posicaoRetirar][POSOCUPADA]==1)
    {
        vagasAndar[vagas[posicaoRetirar][POSANDAR]]++;
        vagas[posicaoRetirar][POSOCUPADA] = 0;
        vagas[posicaoRetirar][POSANDAR] =0 ;
        vagas[posicaoRetirar][POSHORA] = 0;
        vagas[posicaoRetirar][POSHORASAIDA] = 0;
        cout<<"VEICULO RETIRADO DO ESTACIONAMENTO!!!";
    }
    else
    {
        cout<<"VEICULO NAO ESTA AQUI!!";
    }

}

//funcao quantidade de carros somar
int quantidadeDeCarrosEstationados(int vagas[TOTALVAGAS][4])
{
    int quantidadeCarros = 0;
    for(int i =0; i < TOTALVAGAS; i++)
    {
        if(vagas[i][POSOCUPADA] == 1)
        {
            quantidadeCarros++;
        }
    }
    return quantidadeCarros;
}

//funcao para exibir um relatorio de entradad e saida de veiculos
void exibirVagas(int vagas[TOTALVAGAS][4])
{
    cout<<"\n-----------------------------------------------";
    cout<<"\nRelatorio de ENTRADA/ SAIDA / ANDAR dos veiculos";

    cout <<"\n\n\tPOS\tANDAR\tHRENTRO\tHRSAIU\n";
    for(int linha = 0; linha < TOTALVAGAS; linha++)
    {
        if  (vagas[linha][0]==0)
        {
            continue;
        }

        for(int coluna=0; coluna < 4; coluna++)
        {
            cout << "\t" << vagas[linha][coluna];
        }

        cout << endl;
    }
    cout<<"\n\n-----------------------------------------------";
    cout<<"";
    cout<<"";
}


//inicio do main
int main()
{

    int vagas[TOTALVAGAS][4];
    for(int linha = 0; linha < TOTALVAGAS; linha++)
    {
        for(int coluna=0; coluna < 4; coluna++)
        {
            vagas[linha][coluna] = 0;
        }

    }
    //variaveis do tipo inteiro double e float
    int posicaoVagaCaminhonetes=0,posicaoVagaCarros=0,posicaoVaga=0,posicaoVagaCarroEsportivos=0,contadorDeVagas = TOTALVAGAS,contadorDeVagasCaminhonetes=0,contadorDeVagasCarros=0;
    int contadorDeVagasCarroEsportivos =0,CobrarporhoraCarrosTotal,CobrarporhoraCaminhonetes=0,totalCaminhonetes = 60,totalCarroEsportivos = 15,totalCarros = 45,quantidadeVeiculosNaoAtendidos = 0;
    double CobrarporhoraCarros=0,CobrarporhoraCarroEsportivos=0,CobrarporhoraCarro = 0,faturamentoMedioPorHora = 0,faturamentoTotal = 0,faturamentoTotalcarro=0;
    double faturamentoTotalcaminhonete=0;
    float faturamentoTotalsupercarro= 0;
    float totalVeiculos=0;
    int hora=0,horaSaida=0,Cobrarporhora=0,opcao,andar = 1, vagasAndar[6], tipoVeiculo;

    vagasAndar[andar++] = 50;
    vagasAndar[andar++] = 25;
    vagasAndar[andar++] = 10;
    vagasAndar[andar++] = 15;
    vagasAndar[andar++] = 20;

    //comeco do while
    while(contadorDeVagas>0)
    {
        cout<<"\n\t******************************ESTACIONAMENTO*************************"<<endl;
        cout<<""<<endl;
        cout <<"\t Digite uma opcao \n\t[1 - Admin ]  \n\t[2 - Estacionar Veiculo do Cliente]\n\t[3 - Retirar Veiculo ] "<<endl;
        cout<<"\t******************************ESTACIONAMENTO*************************"<<endl;
        //sempre que aprecer essa funcao vai chamar a funcao la em cima com cout opcao
        exibirMensagemOpcao();
        cin >> opcao;

        if(opcao == 1)
        {
            //area pra o adiministtrador entrar
            cout << "\tArea do admin!\n";
            while(opcao != 0)
            {
                //area do sistema para colaboradores
                cout << "\n O que você gostaria de fazer? \n[1- Ver faturamento] \n[2 - Ver quantidade de Veiculos]\n[3 -Exibir Relatorio de ENTRADA E SAIDA]\n \n[0 - SAIR]\n";
                exibirMensagemOpcao();
                cin >> opcao;
                if(opcao==1)
                {
                    //somar a quantidade do faturamentototal e mediopor hora
                    faturamentoTotal =(faturamentoTotalcarro+faturamentoTotalcaminhonete+faturamentoTotalsupercarro);
                    faturamentoMedioPorHora = (faturamentoTotalcarro+faturamentoTotalcaminhonete+faturamentoTotalsupercarro)/8;

                    cout <<"\nValor do faturamento R$:"<<faturamentoTotal<<endl;
                    cout <<"\nValor do faturamento Medio Por Hora R$:"<<faturamentoMedioPorHora<<endl;

                }
                //para escolher segunda opcao
                else if(opcao==2)
                {
                    //mostra a quantidade de carros,carrosesportivos e caminhoes
                    cout<<"\n--------------------------------------------------------------";
                    cout<<"\nQuantidade de Carros: "<<contadorDeVagasCarros;
                    cout<<"\nQuantidade de Caminhonetes: "<<contadorDeVagasCaminhonetes;
                    cout<<"\nQuantidade de CarroEsportivos: "<<contadorDeVagasCarroEsportivos;
                    cout<<"\n--------------------------------------------------------------";

                    //caluculo de qunatas vagas ainda tem
                    quantidadeVeiculosNaoAtendidos= TOTALVAGAS-quantidadeDeCarrosEstationados(vagas);

                    cout <<"\nTotal de Veiculos que passou pelo estacionamento:"<<contadorDeVagas<<endl;
                    cout <<"\nVagas que não foram usadas:"<<quantidadeVeiculosNaoAtendidos<<endl;
                }

                else if(opcao == 3)
                {
                    //funcao que chama o relatorio de entrda e saida
                    exibirVagas(vagas);
                }
            }
        }
        else if(opcao == 2)
        {
            //escolha dos veiculos
            cout << "\tDigite numero referente ao Veiculo do cliente \n\t['1' - Carro]\n\t['2' - Caminhonete]\n\t['3' - Carro Esportivo]" << endl;
            exibirMensagemOpcao();
            cin >> opcao;

            cout << "\tDigite a hora que o veiculo entrou" << endl;
            exibirMensagemOpcao();
            cin >> hora;

            cout << "\tDigite a hora que o veiculo ira  SAIR:" << endl;
            exibirMensagemOpcao();
            cin>>horaSaida;

            //inicio do switch case
            switch(opcao)
            {
            case CARRO:
                //chama a funcao posEstacionarVeiculo que contem as vagas vagaandar  a horaentrda e horasaida
                //faz a decrementação do total de carro o do caontador de vagas a encrementação do contador de carros
                // e o calculo para cobrar por hora
                if(totalCarros > 0 && (vagasAndar[ANDAR_UM] > 0 || vagasAndar[ANDAR_DOIS] > 0))
                {
                    if(vagasAndar[ANDAR_UM] > 0)
                    {
                        posEstacionarVeiculo(vagas, vagasAndar, ANDAR_UM, hora,horaSaida);
                        totalCarros--;
                        contadorDeVagas--;
                        contadorDeVagasCarros++;
                        CobrarporhoraCarro=(horaSaida-hora)*5;
                    }
                    else if(vagasAndar[ANDAR_DOIS] > 0)
                    {
                        posEstacionarVeiculo(vagas, vagasAndar, ANDAR_DOIS, hora,horaSaida);
                        totalCarros--;
                        contadorDeVagas--;
                        contadorDeVagasCarros++;

                    }

                    CobrarporhoraCarro=(horaSaida-hora)*5;
                    faturamentoTotalcarro=faturamentoTotalcarro+CobrarporhoraCarro;
                    cout<<"";
                    cout <<"\nValor cobrado tempo estacionamento da Carro R$:"<<CobrarporhoraCarro<<endl;
                    cout<<"";

                }

                break;
            //chama a funcao posEstacionarVeiculo que contem as vagas vagaandar  a horaentrda e horasaida
            //faz a decrementação do total de carro o do caontador de vagas a encrementação do contador de carros
            // e o calculo para cobrar por hora
            case CAMINHONETE:
                if(totalCaminhonetes > 0 && (vagasAndar[ANDAR_UM] > 0 || vagasAndar[ANDAR_TRES] > 0 || vagasAndar[ANDAR_CINCO] > 0))
                {
                    if(vagasAndar[ANDAR_UM] > 0)
                    {
                        posEstacionarVeiculo(vagas, vagasAndar, ANDAR_UM, hora,horaSaida);
                        totalCaminhonetes--;
                        contadorDeVagas--;
                        contadorDeVagasCaminhonetes++;

                    }
                    else if(vagasAndar[ANDAR_TRES] > 0)
                    {
                        posEstacionarVeiculo(vagas, vagasAndar, ANDAR_TRES,  hora,horaSaida);
                        totalCaminhonetes--;
                        contadorDeVagas--;
                        contadorDeVagasCaminhonetes++;

                    }
                    else if(vagasAndar[ANDAR_CINCO] > 0)
                    {
                        posEstacionarVeiculo(vagas, vagasAndar, ANDAR_CINCO,  hora,horaSaida);
                        totalCaminhonetes--;
                        contadorDeVagas--;
                        contadorDeVagasCarros++;

                    }

                    CobrarporhoraCaminhonetes=(horaSaida-hora)*7;
                    faturamentoTotalcaminhonete=faturamentoTotalcaminhonete+CobrarporhoraCaminhonetes;

                    cout<<"";
                    cout <<"\nValor cobrado tempo estacionamento da Caminhonete R$:"<<CobrarporhoraCaminhonetes<<endl;
                    cout<<"";
                }
                break;
            case CARROESPORTIVO:
                if(totalCarroEsportivos > 0 && vagasAndar[ANDAR_QUATRO] > 0)
                {
                    if(vagasAndar[ANDAR_QUATRO] > 0)
                    {
                        posEstacionarVeiculo(vagas, vagasAndar, ANDAR_QUATRO,hora,horaSaida);
                        totalCarroEsportivos--;
                        contadorDeVagas--;
                        contadorDeVagasCarroEsportivos++;

                    }

                    CobrarporhoraCarroEsportivos=(horaSaida-hora)*5;
                    faturamentoTotalsupercarro=faturamentoTotalsupercarro+CobrarporhoraCarroEsportivos;

                    cout<<"";
                    cout <<"\nValor cobrado tempo estacionamento do Carro Esportivos R$:"<<CobrarporhoraCarroEsportivos<<endl;
                    cout<<"";
                }
                break;

            }
        }

        else if(opcao == 3)
        {
            //cout para tirar o carro
            cout<<"Digite o codigo do carro:";
            cin>>opcao;
            retirarCarro(vagas,opcao,vagasAndar);
        }
    }

    return 0;
}
