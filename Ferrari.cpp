#include <iostream>
#include <math.h>
using std::cout;
using std::endl;


#include "Ferrari.h"



Ferrari::Ferrari(int velocidade, int quilometros, int chave )
{
     
    velocidade = 0;
    quilometros = 0;
    chave = 0;
}

Ferrari::~Ferrari()
{
}

void Ferrari::ligarCarro(int chave)
{
    if(chave==1)
        {cout<<"o carro esta ligado"<<endl;}
        else{cout<<"o carro ainda nao foi ligado"<<endl;};
}


void Ferrari::calculoVelocidade(int quilometros)
{
    this -> quilometros = quilometros * 1000;
    
    velocidade = sqrt(quilometros*aceleracao*2);
    
    cout<< "o carro percorreu: " << quilometros/1000 << "com velocidade de " << velocidade << "km/h" <<endl;   
}


void Ferrari::modoTurbo(int quilometros)
{
    
    this -> quilometros = quilometros * 1000;
    
    velocidade = sqrt(quilometros*aceleracaoTurbo*2);
    
    cout<< "o carro percorreu: " << quilometros/1000 << "com velocidade de " << velocidade << "km/h em modo turbo" <<endl;
    
}

