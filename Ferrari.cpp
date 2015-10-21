#include <iostream>
#include <math.h>
using std::cout;
using std::endl;


#include "Ferrari.h"



Ferrari::Ferrari(float velocidade, float quilometros, bool chave )
{

    this->velocidade = velocidade;
    this->quilometros = quilometros;
    this->chave = chave;
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

