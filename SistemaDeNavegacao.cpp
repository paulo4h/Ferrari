#include "SistemaDeNavegacao.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>
using std::cout;

SistemaDeNavegacao::SistemaDeNavegacao (const string &nomeProprietario, float espacoMemoria)
{
    this->nomeProprietario = nomeProprietario;
    espacoMemoria >= 0 ? this->espacoMemoria = espacoMemoria : this->espacoMemoria = 0.0;
    srand(time(0));
}


SistemaDeNavegacao::SistemaDeNavegacao(const SistemaDeNavegacao &q)
{
    nomeProprietario = q.nomeProprietario;
    espacoMemoria = q.espacoMemoria;

}

SistemaDeNavegacao::~SistemaDeNavegacao()
{

}


void SistemaDeNavegacao::nomeProprietario(const string &nomeProprietario)
{

    this->nomeProprietario = nomeProprietario;

}

void SistemaDeNavegacao::verificarMemoria(float espacoMemoria)
{
    espacoMemoria >= 0 ? this->espacoMemoria = espacoMemoria : this->espacoMemoria = 0.0;
}


void SistemaDeNavegacao::posicaoAtual()
{
    mapa[rand() % 11][rand() % 11] = 100;

    for(i=0;i<=9;i++)
        for(j=0;j<=9;j++)
        {
           if(mapa[i][j] = 100)
                cout<<"o carro esta na posicao ("<< i <<","<< j <<") do mapa 10x10";
        }

    }


}
