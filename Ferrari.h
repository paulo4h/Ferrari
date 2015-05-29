#ifndef _FERRARI_H_H_
#define _FERRARI_H_H_

 
class Ferrari
{
public:
 
    Ferrari(int,int,int);
 
    void valorDaCompra(int );
 
    int verificarMacha ( );
 
    void acelerar ( );
 
 
 
private:
    int aceleracao; 
    int marchas;
    int velocidade;
    static int preçoDeRevenda;
    
 
#endif

