#include <iostream>
#include "Ferrari.h"

using std::cout;
using std::endl;
using std::cin;


int main()
{
	Ferrari test1(0,0,0,0,0);
	
	int decisaoLigar;
    int quilometros;
    
    cout << "*** Irá começar o test drive da ferrari ***" << endl;
    
    cout << "deseja ligar a ferrari (digite '1' para sim e '0' para nao)?" << endl;
    cin >> decisaoLigar;
    
    
    while(decisaoLigar != 1)
    {
    test1.ligarCarro(decisaoLigar);
    cout << "deseja ligar a ferrari (digite '1' para sim e '0' para nao)?" << endl;
    cin >> decisaoLigar;
    }
    
    cout << "digite a quantidade de quilometros que deseja percorrer no teste: " << endl;
    cin >> quilometros;
    
    test1.calculoVelocidade(quilometros);
    
    cout << "agora será calculada a velocidade em modo turbo " << endl;
    
    test1.modoTurbo(quilometros);
    
    
    
	return 0;
}
