#ifndef CASACOMTERRENO_H
#define CASACOMTERRENO_H
#include<iostream>
using namespace std;

#include "Casa.h"
#include "Terreno.h"

class CasacomTerreno:public Casa,Terreno{
  public:
    CasacomTerreno(float valorMQ,int quartos,int idCasa,float Casapreco,float Areaterreno,float precoTerreno,int idTerreno);
    float calculoValor();
    string toString();
  private:
    float valorMQ;
};
#endif
