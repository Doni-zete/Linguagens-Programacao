// Autor:DONIZETE CRISOSTOMO BARBOSA

// Analise e Desenvolvimento de Sistemas NOITE
//Faculdade de Tecnologia de Ribeir˜ao Preto
// Algoritmos e Logica de Programaç˜ao


#include <iostream>
using namespace std;

int main()
{
// Declaração das variaveis foi usado uma constante  nas variaveis,ela nao deixa a variavel ser modificada durante a execução
    const int FantaProduto=1,DoritosProduto=2,CocaProduto=3, AguaProduto=4,RedbullProduto=5;
    const int Chetosproduto=6,PingaProduto=7,RufolsProduto=8,BolachaBauducoProduto= 9,BarraChocolateProduto=10;
//Declaração das variaveis do tipo inteiro
    int QuantiaFanta=2,QuantiaDoritos=10,QuantiaCoca=4,QuantiaAgua=6,QuantiaRedbull=8;
    int QuantiaChetos=10,QuantiaPinga=1,QuantiaRufols=9,QuantiaBolachBauduco=10,QuantiaBarrachoolate=15;

    double FantaPreco=3.50, DoritosPreco=4.50,CocaPreco=5.50,Aguapreco=2.50,RedBullPreco=7.50,ChetosPreco=8.50;
    double  PingaPreco=1.50,RufolsPreco=3.50,BolachaBauducoPreco=5.50, BarrachocolatePreco= 6.50,TrocodoCliente=0, SeuDinheiro=0,
            dinheironaMaquina=0,vendeu=0;
    // varialvel texto
    char ContinuaComprando = 's';
    int Escolherproduto, ContadorDinheiro=0;

    char admin = 'a';

    //Array contem 11 possiçoes  do produto e que cada posição faz referencia a um produto
    double produtosPreco[11];

    // array declarado a cima chamado produtosPreco, ao lado uma variavel recebendo as posições do array,
    // do produto no qual o usuario digita e identifica numero do produto,junto ao lado a variavel fantaPreço com o valor do produto
    // dop array junto com os preço
    //que e o valor que faz referencia ao valor da fanta no caso 1
    produtosPreco[FantaProduto] = FantaPreco;
    produtosPreco[DoritosProduto] = DoritosPreco;
    produtosPreco[CocaProduto] = CocaPreco;
    produtosPreco[AguaProduto] = Aguapreco;
    produtosPreco[RedbullProduto] = RedBullPreco;
    produtosPreco[Chetosproduto] = ChetosPreco;
    produtosPreco[PingaProduto] = PingaPreco;
    produtosPreco[RufolsProduto] = RufolsPreco;
    produtosPreco[BolachaBauducoProduto] = BolachaBauducoPreco;
    produtosPreco[BarraChocolateProduto] = BarrachocolatePreco;

    //araray do tipo int  contendo 11 posisçoes cada quantia faz referencia a quantos produtos tem de determinado item junto com a variavel recebendo o codigo do produto e a outra com a quantidade de itens
    int quantiaProdutos[11];
    quantiaProdutos[FantaProduto]=QuantiaFanta;
    quantiaProdutos[DoritosProduto]=QuantiaDoritos;
    quantiaProdutos[CocaProduto]=QuantiaCoca;
    quantiaProdutos[AguaProduto]=QuantiaAgua;
    quantiaProdutos[RedbullProduto]=QuantiaRedbull;
    quantiaProdutos[Chetosproduto]=QuantiaChetos;
    quantiaProdutos[PingaProduto]=QuantiaPinga;
    quantiaProdutos[RufolsProduto]=QuantiaRufols;
    quantiaProdutos[BolachaBauducoProduto]=QuantiaBolachBauduco;
    quantiaProdutos[BarraChocolateProduto]=QuantiaBarrachoolate;

//começo do while
    while(ContinuaComprando == 'S' || ContinuaComprando == 's')
    {
        cout<<endl<<" Digite um numeros de 1 a 10 para escolher o produto:"<<endl;

        cout << " ************************MENU************************" << endl;
        cout<<endl<<   "\t1 - Fanta 200 ml              (preco 3,50)"  " Quantidade na Maquina 2";
        cout<<endl<<   "\t2 - Doritos 60g               (preco 4,50)"  " Quantidade na Maquina 10";
        cout<<endl<<   "\t3 - Coca - Cola 600 ml        (preco 5,50)"  " Quantidade na Maquina 4";
        cout<<endl<<   "\t4 - Agua Mineral 200 ml       (preco 2,50)"  " Quantidade na Maquina 6";
        cout<<endl<<   "\t5 - RedBull 500 ml            (preco 7,50)"  " Quantidade na Maquina 8";
        cout<<endl<<   "\t6 -  Chetos 150 ml            (preco 8,50)"  " Quantidade na Maquina 10";
        cout<<endl<<   "\t7 - 51Pinga 200 ml            (preco 1,50)"  " Quantidade na Maquina 1";
        cout<<endl<<   "\t8 - Rufols 100 g              (preco 3,50)"  " Quantidade na Maquina 9";
        cout<<endl<<   "\t9 - Bolacha Bauduco 140 g     (preco 5,50)"  " Quantidade na Maquina 10";
        cout<<endl<<   "\t10-Barra de chocolate 150 g   (preco 6,50)"  " Quantidade na Maquina 15"<<endl;
        cout << " **************************************************"    << endl;


        if(TrocodoCliente < 0)
        {
            TrocodoCliente = 0;
        }
        //Entrada do usuario
        cout<<endl<<" Escolha o produto:"<<endl;
        cin>>Escolherproduto;

        //Se a escolha for maior que 11 esssa opção não exite
        if (Escolherproduto >=11)
        {
            cout<<"ESSA OPCAO NAO EXISTE !!!"<<endl;
            cout<<"Escolha outra opçao que exita no menu:"<<endl;

        }
        else
        {

            cout<<endl<<" Entre com o seu Dinheiro R$:";
            cin >> SeuDinheiro;
            TrocodoCliente += SeuDinheiro;
            int Saldo = 0;

            if  (TrocodoCliente < produtosPreco[Escolherproduto])
            {
                Saldo = 1;
                while(Saldo)
                {
                    cout << "SALDO INSUFICIENTE!!!" << endl;
                    cout<<"Entre com mais Dinheiro R$:";
                    cin >> SeuDinheiro;
                    TrocodoCliente += SeuDinheiro;
                    if  (TrocodoCliente >= produtosPreco[Escolherproduto])
                    {
                        Saldo = 0;
                        break;
                    }
                }
            }

            if (quantiaProdutos[Escolherproduto] > 0)
            {
                quantiaProdutos[Escolherproduto] = quantiaProdutos[Escolherproduto] -1;


                //switch case troco do cliente,com contador decrementando menos um, e variavel vendeu  soma quantos de dinheiro ja faturou
                switch (Escolherproduto)
                {
                case FantaProduto:
                {
                    TrocodoCliente = TrocodoCliente - FantaPreco;
                    QuantiaFanta=QuantiaFanta-1;
                    vendeu=vendeu+FantaPreco;
                    cout <<"Voce comprou uma Fanta";
                    break;
                }
                case DoritosProduto:
                {
                    TrocodoCliente = TrocodoCliente - DoritosPreco;
                    QuantiaDoritos=QuantiaDoritos-1;
                    vendeu=vendeu+DoritosPreco;
                    cout <<"Voce comprou  um Doritos";
                    break;
                }

                case CocaProduto:
                {
                    TrocodoCliente = TrocodoCliente - CocaPreco;
                    QuantiaCoca=QuantiaCoca-1;
                    vendeu=vendeu+CocaPreco;
                    cout <<"Voce comprou  uma  latinha de Coca-Cola";
                    break;
                }

                case AguaProduto:
                {
                    TrocodoCliente = TrocodoCliente - Aguapreco;
                    QuantiaAgua=QuantiaAgua-1;
                    vendeu=vendeu+Aguapreco;
                    cout <<"Voce comprou  uma garrafa de Agua mineral";
                    break;
                }

                case RedbullProduto:
                {
                    TrocodoCliente = TrocodoCliente - RedBullPreco;
                    QuantiaRedbull=QuantiaRedbull-1;
                    vendeu=vendeu+RedBullPreco;
                    cout <<"Voce comprou  uma garrafa de Redbull";
                    break;
                }
                case Chetosproduto:
                {
                    TrocodoCliente = TrocodoCliente - ChetosPreco;
                    QuantiaChetos=QuantiaChetos-1;
                    vendeu=vendeu+ChetosPreco;
                    cout <<"Voce comprou  um pacote de  Chetos";
                    break;
                }

                case PingaProduto:
                {
                    TrocodoCliente = TrocodoCliente - PingaPreco;
                    QuantiaPinga=QuantiaPinga-1;
                    vendeu=vendeu+PingaPreco;
                    cout <<"Voce comprou  uma garrafa de Pinga";
                    break;
                }
                case RufolsProduto:
                {
                    TrocodoCliente = TrocodoCliente - RufolsPreco;
                    QuantiaRufols=QuantiaRufols-1;
                    vendeu=vendeu+RufolsPreco;
                    cout <<"Voce comprou  um pacote de Rufols";

                    break;
                }
                case BolachaBauducoProduto:
                {
                    TrocodoCliente = TrocodoCliente - BolachaBauducoPreco;
                    QuantiaBolachBauduco=QuantiaBolachBauduco-1;
                    vendeu=vendeu+BolachaBauducoPreco;
                    cout <<"Voce comprou  um pacote de Bolacha Bauduco";
                    break;
                }

                case BarraChocolateProduto:
                {
                    TrocodoCliente = TrocodoCliente - BarrachocolatePreco;
                    QuantiaBarrachoolate=QuantiaBarrachoolate-1;
                    vendeu=vendeu+BarrachocolatePreco;
                    cout <<"Voce comprou  uma Barra de chocolate";
                    break;
                }
                }


                //cout troco do cliente na variavel trocodocliente
                cout << endl << "Seu troco e R$:" << TrocodoCliente << endl;

            }
            else
            {
                cout<<"Produto escolhido acabou!!";
            }

        }
        cout<<endl<<" Deseja comprar mais algum Produto? (s)para SIM OU (n)para NAO:"<<endl;
        cout<<"----------------------------------------------------------------------"<<endl;
        cin>>ContinuaComprando;
        //entrada em modo admin
        cout <<"Entrar em modo AMINISTRADOR? (a)para SIM OU (n)para NAO QUERO: ";
        cin>>admin;

        switch (admin)
        {
        //selecinar admin com botão a
        case 'a':
            //quantos produtos tem na maquina
            cout<<"Quantidadade de Fanta: "<<QuantiaFanta<<endl;
            cout<<"Quantidadade de Doritos: "<<QuantiaDoritos<<endl;
            cout<<"Quantidadade de Coca-Cola: "<<QuantiaCoca<<endl;
            cout<<"Quantidadade de Agua Mineral: "<<QuantiaAgua<<endl;
            cout<<"Quantidadade de RedBull: "<<QuantiaRedbull<<endl;
            cout<<"Quantidadade de Cheros: "<<QuantiaChetos<<endl;
            cout<<"Quantidadade de Pinga: "<<QuantiaPinga<<endl;
            cout<<"Quantidadade de Rufols: "<<QuantiaRufols<<endl;
            cout<<"Quantidadade de Bolacha Bauduco: "<<QuantiaBolachBauduco<<endl;
            cout<<"Quantidadade de Barra Chocolate: "<<QuantiaBarrachoolate<<endl;
            cout<<endl<<"Quanto a maquina ja faturou: "<<vendeu<<" R$ "<<endl;

            //switch case repor os produtos
            switch(QuantiaFanta)
            case 0:
            cout<<"Precisa repor as Fanta"<<endl;

            switch(QuantiaDoritos)
            case 0:
            cout<<"Precisa repor as Doritos"<<endl;

            switch(QuantiaCoca)
            case 0:
            cout<<"Precisa repor a Coca-Cola"<<endl;

            switch(QuantiaAgua)
            case 0:
            cout<<"pPrecisa repor a Agua Mineral"<<endl;

            switch(QuantiaRedbull)
            case 0:
            cout<<"Precisa repor os Red Bull"<<endl;

            switch(QuantiaChetos)
            case 0:
            cout<<"Precisa repor os Chetos"<<endl;

            switch(QuantiaPinga)
            case 0:
            cout<<"Precisa repor as Pinga"<<endl;

            switch(QuantiaRufols)
            case 0:
            cout<<"Precisa repor as Rufols"<<endl;

            switch(QuantiaBolachBauduco)
            case 0:
            cout<<"Precisa repor as BolachBauduco"<<endl;

            switch(QuantiaBarrachoolate)
            case 0:
            cout<<"Precisa repor as Barrachoolate"<<endl;

            //Soma de quantos ja foi faturado
            dinheironaMaquina= QuantiaFanta*FantaPreco+ QuantiaDoritos*DoritosPreco+QuantiaAgua*Aguapreco + QuantiaBarrachoolate* BarrachocolatePreco
                               +QuantiaBolachBauduco*BolachaBauducoPreco+QuantiaChetos *ChetosPreco +QuantiaCoca*CocaPreco+QuantiaPinga*PingaPreco +QuantiaRedbull*RedBullPreco+QuantiaRufols*RufolsPreco;


        }

    }


    return 0;
}



