#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using std::cout;
using std::endl;


#include "Ferrari.h"

int Ferrari::numeroDeFerrari = 0;


Ferrari::Ferrari(float velocidade, float quilometros, bool chave, bool onOff, int chaveDoVeiculo, string novoRegistroManutencao, int numRegistroManutencao, string registroManutencao )// colocar para verificar se os valores são positivos.
{

    velocidade >= 0 ? this->velocidade = velocidade : this->velocidade = 0;
    quilometros>= 0 ? this->quilometros = quilometros : this->quilometros = 0;

    this->chave = chave;
    numeroDeFerrari++; // toda vez que uma ferrari for criada é somada +1 ao numero de ferraris existentes.
    onOff = false;
    this-> chaveDoVeiculo = chaveDoVeiculo;
    srand(time(0));
    numRegistroManutencao = 0;
}

Ferrari::Ferrari(const Ferrari &p)
{
    velocidade = p.velocidade;
    quilometros = p.quilometros;
    chave = p.chave;
    numeroDeFerrari ++; // caso utilizar o construtor de copia tambem irá estar gerando outra ferrari.
    onOff =  p.onOff;

}


Ferrari::~Ferrari()
{
}

void Ferrari::verificarChave()
{
    if(this->chave == true)
    {
        cout<<"voce ja possui a chave\n\n"<<endl;
    }
    else
    {
        pegarChave();
    }

}


void Ferrari::pegarChave()
{
    int chaveDoVeiculo = rand() % 100 + 1;

    while(chaveDoVeiculo > 70)
    {


        cout <<"\no processo de obter a chave falhou sera tentado novamente\n\n" << endl;
        chaveDoVeiculo = rand() % 100 + 1;

    }
    chave = true;

}


void Ferrari::ligarCarro(bool chave)
{
    if(chave==true)
    {
        cout<<"o carro esta ligado!!!\n"<<endl;
        onOff = true;
    }
    else
    {
        cout<<"o carro ainda nao foi ligado\n"<<endl;
    };
}

void Ferrari::calculoVelocidade(float quilometros)
{
    this -> quilometros = quilometros * 1000;

    velocidade = sqrt(quilometros*aceleracao*2);

    cout<< "\n o carro percorreu: " << quilometros << " km com velocidade de " << velocidade << "km/h" <<endl;
}


void Ferrari::modoTurbo(float quilometros)
{

    this->quilometros = quilometros * 1000;

    velocidade = sqrt(quilometros*aceleracaoTurbo*2);

    cout<< "\n o carro percorreu: " << quilometros << " km com velocidade de " << velocidade << "km/h em modo turbo" <<endl;

}

int Ferrari::getNumeroDeFerrari()const
{
    return numeroDeFerrari;
}



void Ferrari::definirUltimaManutencao(const string &novoRegistroManutencao)
{
    if (numRegistroManutencao != 0)
    {
        string * aux = new string[numRegistroManutencao];

        for(int i = 0; i < numRegistroManutencao; i++)
            aux[i] = registroManutencao[i];

        delete [] registroManutencao;

       registroManutencao = new string[numRegistroManutencao++];

        for(int i = 0; i < numRegistroManutencao; i++)
            registroManutencao[i] = aux[i];


        registroManutencao[numRegistroManutencao-1] = novoRegistroManutencao;


        delete [] aux;



    }
    else
    {
        registroManutencao = new string[numRegistroManutencao++];
        registroManutencao[0] = novoRegistroManutencao;
    }


}
