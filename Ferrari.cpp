#include <iostream>
#include <math.h>
using std::cout;
using std::endl;


#include "Ferrari.h"

int Ferrari::numeroDeFerrari = 0;
const int Ferrari::numeroMaximoDeTeste = 1;

Ferrari::Ferrari(float velocidade, float quilometros, bool chave )// colocar para verificar se os valores são positivos.
{

    velocidade >= 0 ? this->velocidade = velocidade : this->velocidade = 0;
    quilometros>= 0 ? this->quilometros = quilometros : this->quilometros = 0;
    this->chave = chave;
    numeroDeFerrari ++; // toda vez que uma ferrari for criada é somada +1 ao numero de ferraris existentes.
}

Ferrari::Ferrari(const Ferrari &p)
{
    velocidade = p.velocidade;
    quilometros = p.quilometros;
    chave = p.chave;
    numeroDeFerrari ++; // caso utilizar o construtor de copia tambem irá estar gerando outra ferrari.
}


Ferrari::~Ferrari()
{
}

void Ferrari::ligarCarro(bool chave)
{
    if(chave==true)
    {
        cout<<"o carro esta ligado!!!\n"<<endl;
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

    cout<< "o carro percorreu: " << quilometros << " km com velocidade de " << velocidade << "km/h" <<endl;
}


void Ferrari::modoTurbo(float quilometros)
{

    this->quilometros = quilometros * 1000;

    velocidade = sqrt(quilometros*aceleracaoTurbo*2);

    cout<< "o carro percorreu: " << quilometros << " km com velocidade de " << velocidade << "km/h em modo turbo" <<endl;

}

int Ferrari::getNumeroDeFerrari()const
{
    return numeroDeFerrari;
}
