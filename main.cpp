#include <iostream>
#include "Ferrari.h"

using std::cout;
using std::endl;
using std::cin;


int main()
{
	Ferrari test1(0, 0, false);

	bool decisaoLigar;
    float quilometros;
    int x;

    cout << "*** Ira comecar o test drive da ferrari *** \n\n" << endl;

    cout << "deseja ligar a ferrari (digite '1' para sim e '0' para nao)? \n" << endl;
    cin >> x;
    if(x==1)
    {
        decisaoLigar = true;
    }
    else
    {
        decisaoLigar = false;
    }

    test1.ligarCarro(decisaoLigar);

    while(decisaoLigar != true)
    {

    cout << "deseja ligar a ferrari (digite '1' para sim e '0' para nao)? \n" << endl;
    cin >> decisaoLigar;
    test1.ligarCarro(decisaoLigar);

    }

    cout << "digite a quantidade de quilometros que deseja percorrer no teste:\n " << endl;
    cin >> quilometros;

    test1.calculoVelocidade(quilometros);

    cout << "agora sera calculada a velocidade em modo turbo \n" << endl;

    test1.modoTurbo(quilometros);



	return 0;
}
