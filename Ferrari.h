#ifndef FERRARI_H
#define FERRARI_H


class Ferrari
{
public:
	Ferrari(int, int, int);
	
	
	~Ferrari();

	
	void calculoVelocidade(int);
	
	void ligarCarro(int);
    
    void modoTurbo(int);
private:

    int const aceleracao = 5; 
    float velocidade;
    int quilometros;
    int chave;
    int const aceleracaoTurbo = 10;
    
	

};

#endif // FERRARI_H
