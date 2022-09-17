#ifndef CASA_H
#define CASA_H
#include<iostream>
using namespace std;

#include "Imovel.h"
class Casa:public Imovel{
  public:
    Casa(int quartos,int id,float preco);
    int getQuartos();
    string toString();
  private:
    int quartos;

};
#endif