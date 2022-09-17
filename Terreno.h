#ifndef TERRENO_H
#define TERRENO_H
#include<iostream>
using namespace std;

#include "Imovel.h"
class Terreno:public Imovel{
  public:
    Terreno(float area,float preco,int id);
    float getArea();
    string toString();
  private:
    float area;
};
#endif
