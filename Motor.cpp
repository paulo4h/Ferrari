#include "Motor.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>
using std::cout;

Motor::Motor(const string &fabricante, int anoFabricacao, bool statusMotor, int temperatura, bool ventilador)
{
    this->fabricante = fabricante;
    anoFabricacao >= 0 && anoFabricacao <= 2100 ? this->anoFabricacao = anoFabricacao : this->anoFabricacao = 0;
    this->statusMotor = statusMotor;
    this->temperatura = temperatura;
    this->ventilador = ventilador;
    srand(time(0));
}


Motor::Motor(const Motor &atual)
{
    fabricante = atual.fabricante;
    anoFabricacao = atual.anoFabricacao;
    statusMotor = atual.statusMotor;
    temperatura = atual.temperatura;
    ventilador = atual.ventilador;
}
Motor::~Motor()
{
}


void Motor::definirFabricante(const string &fabricante)
{

    this->fabricante = fabricante;

}

void Motor::definirAnoFabricacao(int anoFabricacao)
{
    anoFabricacao >= 0 && anoFabricacao <= 2100 ? this->anoFabricacao = anoFabricacao : this->anoFabricacao = 0;
}


void Motor::ligarMotor()
{
    statusMotor = true;
}


void Motor::verificarTemperatura()
{
    temperatura = rand() % 100 + 1;

    if (temperatura > 80 )
        cout<<"o motor esta super aquecido, o ventilador eletrico sera ligado para resfriar";
    ventilador = true;
}
