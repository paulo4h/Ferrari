#ifndef FERRARI_H
#define FERRARI_H


class Ferrari
{

private:

    const int aceleracao = 5; // tomando como constante a aceleração de uma ferrari imaginaria, ou seja, percorre  em 1 segundo.
    float velocidade;
    float quilometros;
    bool chave;
    const int  aceleracaoTurbo = 10;


public:
	Ferrari(float velocidade, float quilometros, bool chave);


	~Ferrari();


	void calculoVelocidade(float);

	void ligarCarro(bool); // boleano o parametro

    void modoTurbo(float);

};

#endif // FERRARI_H
