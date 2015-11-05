#ifndef MOTOR_H
#define MOTOR_H

#include<string>
using std::string;


class Motor
{
    public:
        Motor(const string & = "", int = 0, int = 0, bool = false);
        Motor(const Motor &);
        ~Motor();
        void definirFabricante(const string &);
        void definirAnoFabricacao(int);
        void ligarMotor();
        void verificarTemperatura();

    private:

        string fabricante;
        int anoFabricacao;
        bool statusMotor;
        int temperatura;
        bool ventilador;
};

#endif // MOTOR_H
