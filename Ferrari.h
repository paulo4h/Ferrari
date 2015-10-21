#ifndef FERRARI_H
#define FERRARI_H


class Ferrari
{

public:
	Ferrari(float = 0.0, float = 0.0 , bool = false);

    Ferrari(const Ferrari &);

    ~Ferrari();


	void calculoVelocidade(float);

	void ligarCarro(bool);

    void modoTurbo(float);

    int getNumeroDeFerrari()const;
private:

    const int aceleracao = 5; // tomando como constante a aceleração de uma ferrari imaginaria para facilitar os calculos, com base na formula da fisica.
    float velocidade;
    float quilometros;
    bool chave;
    const int  aceleracaoTurbo = 10; // enquanto a aceleração é 5 a aceleração turbo é o dobro.
    static int numeroDeFerrari;
    const static int numeroMaximoDeTeste; // numero maximo de carros que podem ser testados por vez;

};

#endif // FERRARI_H
