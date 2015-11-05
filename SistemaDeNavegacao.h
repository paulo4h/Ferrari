#ifndef SISTEMADENAVEGACAO_H
#define SISTEMADENAVEGACAO_H

#include<string>
using std::string;

class SistemaDeNavegacao
{
    public:
        SistemaDeNavegacao(const string & = "", float = 0.0);
        SistemaDeNavegacao(const SistemaDeNavegacao &q);
        ~SistemaDeNavegacao();
        void definirdefinirProprietario(string&);
        void verificarMemoria(int);
        void posicaoAtual();

    private:
        string nomeProprietario;
        float espacoMemoria;
        int mapa[10][10];// Mapa total de 10x10.
};

#endif // SISTEMADENAVEGACAO_H
