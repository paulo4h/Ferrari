#ifndef FERRARI_H
#define FERRARI_H
#include "Motor.h"
#include "SistemaDeNavegacao.h"
#include<string>
using std::string;

class Ferrari
{

public:
	Ferrari(float = 0.0, float = 0.0 , bool = false, bool = false, int = 0, string =  "", int = 0, string = "");

    Ferrari(const Ferrari &);

    ~Ferrari();

    void verificarChave();

    void pegarChave();

	void calculoVelocidade(float);

	void ligarCarro(bool);

    void modoTurbo(float);

    int getNumeroDeFerrari()const;

    void definirUltimaManutencao(const string &);
private:

    const int aceleracao = 5; // tomando como constante a aceleração de uma ferrari imaginaria para facilitar os calculos, com base na formula da fisica.
    float velocidade;
    float quilometros;
    bool chave;
    bool onOff;
    int  chaveDoVeiculo;
    const int  aceleracaoTurbo = 10; // enquanto a aceleração é 5 a aceleração turbo é o dobro.
    static int numeroDeFerrari;
    const static int numeroMaximoDeTeste = 1; // numero maximo de carros que podem ser testados por vez;
    string *novoRegistroManutencao;
    int numRegistroManutencao;
    string *registroManutencao;
    int i;
    Motor motorCarro;
    SistemaDeNavegacao nav1;
};

#endif // FERRARI_H
